//
//  MTPFileManager.swift
//  MarkdownToPlayground
//
//  Created by Francesco Frison on 15/06/2014.
//  Copyright (c) 2014 Ziofritz. All rights reserved.
//

import Foundation

let MTPFileManagerCSSFileName = "style.css"

class MTPFileManager {
    
    var filePath: String
    var userPath: String
    var filename: String? {
    get {
        return self.filePath.lastPathComponent.stringByDeletingPathExtension
    }
    }
    
    var markdown: String {
    get {
        let url = NSURL.fileURLWithPath(self.filePath)
        var error : NSError? = nil
        var result = NSString.stringWithContentsOfURL(url, encoding: NSUTF8StringEncoding, error: &error)
        if error {
            NSLog("An error occured while retrieveing markdown at url %@\n %@", url.absoluteString, error!.localizedDescription);
        }
        return result
    }
    }
    
    var playgroundPath: String {
    get {
        // filePath/../fileName.playground
        return self.userPath.stringByAppendingPathComponent(self.filename!).stringByAppendingPathExtension("playground")
    }
    }
    
    var documentationPath: String {
    get {
        return self.playgroundPath.stringByAppendingPathComponent("Documentation")
    }
    }
    
    init(markdownFile: String?, userPath: String?) {
        self.userPath = userPath!
        
        if markdownFile!.hasPrefix("/") || markdownFile!.hasPrefix("~") {
            self.filePath = markdownFile!
        }
        else {
            self.filePath = self.userPath.stringByAppendingPathComponent(markdownFile!)
        }
    }
    
    func createPlaygroundProject() -> Bool {
        var error : NSError? = nil
        let created = NSFileManager.defaultManager().createDirectoryAtPath(self.documentationPath, withIntermediateDirectories: true, attributes: nil, error: &error)
        if !created || error {
             NSLog("Error while creating playgorund file: %@", error!.localizedDescription);
            return false
        }
        else {
            let cssPath = self.documentationPath.stringByAppendingPathComponent(MTPFileManagerCSSFileName)
            let css = CSS_FORMAT
            css.writeToFile(cssPath, atomically: true, encoding: NSUTF8StringEncoding, error: &error)
            if (error) {
                NSLog("Error while creating CSS file: %@", error!.localizedDescription);
            }
            
            return !error
        }
    }
    
    func outputPlaygroundWithContent(content : Dictionary<String, String>?) {
        if !content {
            return
        }
        
        createPlaygroundProject()
        
        var lines = Array<String>()
        var error: NSError? = nil
        
        for (key, value) in content! {
            let isSwift = key.hasSuffix("swift")
            
            var format :String
            var fileRoot :String
            var fileType :String
            if isSwift {
                format = SWIFT_RESOURCE_FORMAT
                fileRoot = self.playgroundPath
                fileType = "Swift"
            }
            else {
                format = HTML_RESOURCE_FORMAT
                fileRoot = self.documentationPath
                fileType = "Documentation"
            }
            
            let line = NSString(format: format, key)
            lines.append(line)
            
            let filePath = fileRoot.stringByAppendingPathComponent(key)
            value.writeToFile(filePath, atomically: true, encoding: NSUTF8StringEncoding, error: &error)
            
            if (error) {
                NSLog("Error while writing to file: %@", error!.localizedDescription);
            }
            else {
                NSLog("%@ file has been written [%@]", fileType, key);
            }
            
        }
        
        let orderedLines = sortLines(lines)
        
        let playgroundContent = NSString(format: PLAYGROUND_FORMAT, orderedLines.componentsJoinedByString("\n"))
        let contentFilePath = self.playgroundPath.stringByAppendingPathComponent("contents.xcplayground")
        playgroundContent.writeToFile(contentFilePath, atomically: true, encoding: NSUTF8StringEncoding, error: &error)
        if (error) {
            NSLog("Error while writing to file: %@", error!.localizedDescription);
        }
        else {
            NSLog("Playgorund Documentation created at %@", self.playgroundPath);
        }
        
    }
    
    func intFromName(name: NSString) -> Int? {
        
        var error : NSError? = nil
        let regExString : NSString! = "-(\\d+)\\."
        let regEx = NSRegularExpression.regularExpressionWithPattern(regExString, options: nil, error: &error)
        
        let match = regEx.firstMatchInString(name, options: nil, range: NSMakeRange(0, name.length))
        let range = match.rangeAtIndex(1)
        let num = name.substringWithRange(range)
        
        return num.toInt()
    }
    
    func sortLines(lines: Array<String>) -> NSArray {
        
        let comparator = { (line1 :AnyObject!, line2: AnyObject!) -> NSComparisonResult in
            let num1 = self.intFromName(line1 as String)!;
            let num2 = self.intFromName(line2 as String)!;
            
            if num1 == num2 {
                return NSComparisonResult.OrderedSame
            }
            else if num1 < num2 {
                return NSComparisonResult.OrderedDescending
            }
            else {
                return NSComparisonResult.OrderedAscending
            }
        }
        let toBeSortedArray : NSArray = lines
        
        return toBeSortedArray.sortedArrayUsingComparator(comparator)
    }
    
}