
#ifndef MarkdownToPlayground_CSS_Formats_h
#define MarkdownToPlayground_CSS_Formats_h

#define CSS_FORMAT @"html,body,div,span,applet,object,iframe,h1,h2,h3,h4,h5,h6,p,blockquote,pre,a,abbr,acronym,address,big,cite,code,del,dfn,em,figure,font,img,ins,kbd,q,s,samp,small,strike,strong,sub,sup,tt,var,b,u,i,center,dl,dt,dd,ol,ul,li,fieldset,form,label,legend,table,caption,tbody,tfoot,thead,tr,th,td {\
    /* background: transparent; */\
border: 0;\
    font-size: 100%;\
margin: 0;\
outline: 0;\
padding: 0;\
    vertical-align: baseline\
}\
body.jazz {\
    background-color: rgba(255,255,255,0.65);\
color: rgba(0,0,0,1);\
    font-family: Helvetica,Arial,sans-serif;\
    font-size: 62.5%;\
    margin-left: 15px;\
}\
.jazz a[name] {\
display: block;\
    padding-top: 85px;\
margin: -95px 0 0\
}\
.jazz .content-wrapper {\
    /* background-color: rgba(255,255,255,1); */\
margin: 0 auto;\
}\
.jazz .chapter {\
    /* background-color: rgba(255,255,255,1); */\
border: 1px solid rgba(238,238,238,1);\
    box-shadow: 0 0 1px rgba(0,0,0,.07);\
display: block;\
    margin-left: 246px;\
    min-height: calc(100% - 173px);\
    min-height: -moz-calc(100% - 173px);\
    min-height: -webkit-calc(100% - 173px);\
    min-height: -o-calc(100% - 173px);\
position: absolute;\
overflow: auto;\
    padding-bottom: 100px;\
top: 70px;\
    -webkit-overflow-scrolling: touch;\
}\
.jazz #mini_toc {\
    /* background-color: rgba(255,255,255,1); */\
    background-image: url(../Images/plus_2x.png);\
    background-position: 90% 11px;\
    background-repeat: no-repeat;\
    background-size: 12px 12px;\
border: 1px solid rgba(238,238,238,1);\
    box-shadow: 0 0 1px rgba(0,0,0,.07);\
    margin-left: 505px;\
padding: 10px 10px 0 15px;\
position: fixed;\
top: 85px;\
width: 190px;\
    z-index: 1;\
overflow: auto;\
height: 25px;\
    max-height: 500px;\
    -webkit-transition: height .3s ease,-webkit-transform .3s ease;\
    -moz-transition: height .3s ease,-moz-transform .3s ease;\
    -o-transition: height .3s ease,-o-transform .3s ease;\
    -ms-transition: height .3s ease,-ms-transform .3s ease;\
transition: height .3s ease,transform .3s ease\
}\
.jazz #mini_toc.slide-out {\
    -webkit-transform: translateY(-85px);\
    -moz-transform: translateY(-85px);\
    -o-transform: translateY(-85px);\
    -ms-transform: translateY(-85px);\
transform: translateY(-85px)\
}\
.jazz #mini_toc.open {\
    background-image: url(../Images/minus_2x.png);\
    z-index: 2\
}\
.jazz #mini_toc #mini_toc_button {\
cursor: pointer;\
width: 195px\
}\
\
.jazz .section {\
padding: 20px 25px 20px 35px\
}\
.jazz .section .section {\
margin: 30px 0 0;\
padding: 0\
}\
.jazz .clear {\
}\
.jazz .two-columns {\
clear: both;\
display: table;\
margin: 60px auto;\
    vertical-align: middle;\
width: 85%\
}\
.jazz .left-column,.jazz .right-column {\
display: table-cell;\
height: 100%;\
    vertical-align: middle\
}\
.jazz .left-column {\
    padding-right: 10px\
}\
.jazz .right-column {\
    padding-left: 10px\
}\
.jazz .right-column.left-align {\
width: 100%\
}\
.jazz .right-column.left-align .para {\
color: rgba(128,128,128,1);\
    font-size: 1.6em\
}\
.jazz .two-columns .inline-graphic {\
margin: 0 auto;\
    text-align: center\
}\
.jazz .two-columns .para {\
clear: both;\
    font-size: 1.4em\
}\
.jazz #ios_header {\
    /* background-color: rgba(65,65,65,1); */\
    box-shadow: 0 1px 1px rgba(0,0,0,.07);\
color: rgba(255,255,255,1);\
height: 25px;\
    letter-spacing: .05em;\
position: fixed;\
top: 0;\
width: 100%;\
    z-index: 4\
}\
.jazz .header-text {\
    font-size: 1.1em;\
margin: 0 auto;\
    padding-top: 6px;\
    vertical-align: middle;\
    float: left\
}\
.jazz .header-text a {\
color: rgba(255,255,255,1);\
    text-decoration: none\
}\
.jazz #apple_logo {\
    padding-right: 8px;\
    vertical-align: -2px\
}\
.jazz #wwdr {\
    float: right;\
    padding-top: 4px;\
    font-size: 1.1em;\
    vertical-align: middle;\
margin: 0 auto\
}\
.jazz #wwdr a {\
color: rgba(255,255,255,1);\
    text-decoration: none\
}\
.jazz #valence {\
    /* background-color: rgba(242,242,242,1); */\
display: block;\
height: 60px;\
    padding-top: 10px;\
position: fixed;\
top: 0;\
width: 100%;\
    z-index: 3\
}\
.jazz #hierarchial_navigation {\
    float: left;\
    font-size: 1.4em;\
    margin-top: 29px;\
    vertical-align: middle\
}\
.jazz #carat {\
margin: 0 10px\
}\
.jazz #design_resources_link {\
color: rgba(0,136,204,1);\
    text-decoration: none\
}\
.jazz #book_title {\
color: rgba(0,0,0,1);\
    font-size: 1em\
}\
.jazz .download-text {\
color: rgba(0,136,204,1);\
    float: right;\
    font-size: 1.1em;\
    margin-right: 20px;\
    margin-top: 32px;\
    text-decoration: none\
}\
.jazz input[type=search] {\
    background-size: 14px 14px;\
    background-image: url(../Images/magnify_2x.png);\
    background-position: 3% 50%;\
    background-repeat: no-repeat;\
border: 1px solid rgba(238,238,238,1);\
    box-shadow: 0 0 1px rgba(0,0,0,.07);\
    -webkit-appearance: none;\
    float: right;\
    font-family: Helvetica,Arial,sans-serif;\
    font-size: 1.1em;\
height: 30px;\
    margin-right: -2px;\
    margin-top: 23px;\
    padding-left: 18px;\
    vertical-align: middle;\
width: 177px\
}\
.jazz #shortstack {\
display: none\
}\
.jazz .para {\
color: rgba(65,65,65,1);\
    font-size: 1.4em;\
    line-height: 145%;\
    margin-bottom: 5px;\
    \
}\
.jazz .chapter-name {\
color: rgba(0,0,0,1);\
display: block;\
    font-family: Helvetica;\
    font-size: 2.8em;\
    font-weight: 100;\
    margin-bottom: 0;\
padding: 15px 25px;\
width: 63%\
}\
.jazz #mini_toc p {\
    font-size: 1.4em\
}\
.jazz #mini_toc .list-bullet a {\
color: rgba(0,136,204,1);\
    list-style-type: none;\
    list-style-position: outside;\
    margin-left: 0;\
    padding-left: 0;\
    text-decoration: none\
}\
.jazz #mini_toc ul.list-bullet {\
    list-style-type: none;\
    margin-bottom: 0;\
    margin-left: 0;\
    margin-top: 15px;\
overflow: hidden;\
    padding-left: 0;\
width: 167px;\
display: none\
}\
.jazz #mini_toc.open ul.list-bullet {\
display: block\
}\
.jazz #mini_toc ul.list-bullet li.item {\
    padding-left: 0;\
display: block\
}\
.jazz #mini_toc ul.list-bullet li.item:before {\
content: none\
}\
.jazz #mini_toc ul.list-bullet li.item .para {\
color: rgba(0,136,204,1);\
    font-size: 1.4em;\
    line-height: 135%;\
    padding-bottom: 22px;\
    text-decoration: none\
}\
.jazz .chapter a {\
color: rgba(0,136,204,1);\
    text-decoration: none\
}\
.jazz h3.section-name:before {\
display: block;\
content: ' ';\
    margin-top: -85px;\
height: 85px;\
visibility: hidden\
}\
.jazz .section-name {\
color: rgba(128,128,128,1);\
display: block;\
    font-family: Helvetica;\
    font-size: 2.2em;\
    font-weight: 100;\
    margin-bottom: 15px;\
    margin-top: 20px;\
}\
.jazz .section .section .section-name {\
color: rgba(0,0,0,1);\
    font-size: 1.8em;\
    letter-spacing: 0;\
    padding-top: 20px\
}\
.jazz .section .section .section .section-name {\
    font-size: 1.6em;\
    padding-top: 0\
}\
.jazz .title-three {\
color: rgba(0,0,0,1);\
    font-size: 2em;\
    font-weight: 400;\
    margin-bottom: 10px\
}\
.jazz .inline-head {\
}\
.jazz .code-voice {\
color: rgba(128,128,128,1);\
    font-family: Menlo,monospace;\
    font-size: .9em;\
    word-wrap: break-word\
}\
.jazz .copyright {\
clear: both;\
color: rgba(160,160,160,1);\
    float: none;\
margin: 70px 25px 10px 0\
}\
.jazz .link {\
color: rgba(0,136,204,1);\
    text-decoration: none\
}\
.jazz .u-book {\
}\
.jazz .pediaLink {\
}\
.jazz .x-name-no-link {\
}\
.jazz .u-api {\
}\
.jazz ul.list-bullet {\
    list-style: none;\
    margin-bottom: 12px;\
    margin-left: 24px;\
    padding-left: 0\
}\
.jazz ul.list-bullet li.item {\
    list-style-type: none;\
    list-style-image: none;\
    padding-left: 1.3em;\
position: relative\
}\
.jazz .aside ul.list-bullet li.item {\
    padding-left: 1.1em\
}\
.jazz ul.list-bullet li.item:before {\
color: rgba(65,65,65,1);\
content: '\02022';\
    font-size: 1.5em;\
left: 0;\
    padding-top: 2px;\
position: absolute\
}\
.jazz .aside ul.list-bullet li.item:before {\
    font-size: 1.2em;\
    margin-top: -2px\
}\
.jazz .list-number,.jazz .list-simple,.jazz .list-check {\
    margin-bottom: 12px;\
    margin-left: 20px;\
    padding-left: 20px\
}\
.jazz .list-number {\
color: rgba(65,65,65,1);\
    font-size: 1.4em\
}\
.jazz .aside .list-number {\
    font-size: 1em\
}\
.jazz ol.list-number li.item ol.list-number {\
    font-size: 1em\
}\
.jazz .list-number .item p {\
    font-size: 1em\
}\
.jazz .list-simple {\
    list-style-type: none\
}\
.jazz .list-check {\
    list-style: url(../Images/check.png) outside none\
}\
.jazz .item p {\
margin: 0;\
    padding-bottom: 6px\
}\
.jazz .book-parts {\
    /* background-color: rgba(249,249,249,1); */\
border: 1px solid rgba(238,238,238,1);\
bottom: 0;\
    box-shadow: 0 0 1px rgba(0,0,0,.07);\
display: block;\
overflow: auto;\
    -webkit-overflow-scrolling: touch;\
position: fixed;\
top: 70px;\
width: 230px\
}\
.jazz .nav-parts {\
color: rgba(128,128,128,1);\
    font-weight: 100;\
    line-height: 140%;\
    list-style-type: none;\
margin: 0;\
    -webkit-padding-start: 0\
}\
.jazz .part-name {\
    border-bottom: 1px solid rgba(238,238,238,1);\
    font-family: Helvetica;\
    font-size: 1.6em;\
    line-height: 150%;\
    list-style-type: none;\
margin: 0;\
padding: 15px 30px 15px 20px;\
cursor: pointer\
}\
.jazz .nav-chapters {\
    font-weight: 400;\
    line-height: 110%;\
    list-style-position: outside;\
    list-style-type: none;\
margin: 0;\
padding: 0;\
height: 0;\
overflow: hidden;\
    -webkit-transition: height .3s ease-in-out;\
    -moz-transition: height .3s ease-in-out;\
    -o-transition: height .3s ease-in-out;\
    -ms-transition: height .3s ease-in-out;\
transition: height .3s ease-in-out\
}\
.jazz .nav-chapter {\
    font-size: .8em;\
    list-style-position: outside;\
    list-style-type: none;\
margin: 0;\
padding: 0 0 8px\
}\
.jazz .nav-chapters .nav-chapter {\
    margin-left: 0\
}\
.jazz .nav-chapter .nav-chapter-active {\
color: rgba(0,0,0,1);\
    font-weight: 700;\
    text-decoration: none\
}\
.jazz .book-parts a {\
color: rgba(128,128,128,1);\
display: block;\
    margin-left: 15px;\
    text-decoration: none\
}\
.jazz .aside-title {\
color: rgba(128,128,128,1);\
    font-size: .6em;\
    letter-spacing: 2px;\
    margin-bottom: 8px;\
    text-transform: uppercase\
}\
.jazz .tip,.jazz .warning,.jazz .important,.jazz .note {\
    background-color: rgba(249,249,249,1);\
    border-left: 5px solid rgba(238,238,238,1);\
color: rgba(0,0,0,1);\
    font-size: 1.2em;\
margin: 25px 45px 35px 35px;\
padding: 15px 15px 7px;\
    \
}\
.jazz .note .para,.jazz .important .para,.jazz .tip .para,.jazz .warning .para {\
    font-size: 1em;\
    margin-bottom: 8px\
}\
.jazz .note {\
    border-left: 5px solid rgba(238,238,238,1)\
}\
.jazz .important {\
    border-left: 5px solid rgba(128,128,128,1)\
}\
.jazz .tip {\
    border-left: 5px solid rgba(238,238,238,1)\
}\
.jazz .warning {\
    border-left: 5px solid rgba(247,235,97,1)\
}\
.jazz .rec-container {\
margin: 40px auto;\
    text-align: center;\
width: 95%\
}\
.jazz .rec-container .blurb {\
    text-align: center\
}\
.jazz .rec-container .blurb .para:nth-child(1) {\
color: rgba(128,128,128,1);\
    font-size: 2em;\
    font-weight: 100;\
    line-height: 120%;\
margin: 0 auto 20px;\
width: 460px\
}\
.jazz .rec-container .blurb .para {\
    margin-bottom: 20px\
}\
.jazz .rec-container .left-container,.jazz .rec-container .right-container {\
display: table-cell;\
    margin-top: 20px;\
width: 325px\
}\
.jazz .rec-container .left-container {\
    padding-right: 10px\
}\
.jazz .rec-container .right-container {\
    padding-left: 10px\
}\
.jazz .rec-container .container-label {\
    font-size: 1.5em;\
    margin-bottom: 10px\
}\
.jazz .rec-container .do {\
color: rgba(17,183,40,1)\
}\
.jazz .rec-container .do-not {\
color: rgba(208,50,54,1)\
}\
.jazz .rec-container .recommended {\
color: rgba(40,103,206,1)\
}\
.jazz .rec-container .not-recommended {\
color: rgba(255,133,0,1)\
}\
.jazz .rec-container .inline-graphic {\
margin: 10px auto;\
    max-width: 100%\
}\
.jazz .code-listing {\
    background-clip: padding-box;\
margin: 20px 0;\
    text-align: left\
}\
.jazz .item .code-listing {\
padding: 0;\
margin: 0 0 15px\
}\
.jazz .code-listing .caption {\
    caption-side: top;\
display: block;\
    font-size: 1.1em;\
    text-align: left;\
    margin-bottom: 16px\
}\
.jazz>.content-wrapper>.chapter>.section>.list-number>.item>.code-listing {\
    padding-top: 0;\
    padding-bottom: 5px;\
    margin-top: 0;\
    margin-bottom: 0\
}\
.jazz .code-sample {\
    /* background-color: rgba(249,249,249,1); */\
display: block;\
    font-size: 1.4em;\
    margin-left: 20px\
}\
.jazz ol .code-sample {\
    font-size: 1em\
}\
.jazz .code-lines {\
    /* background-color: rgba(255,255,255,1); */\
    counter-reset: li;\
    line-height: 1.6em;\
    list-style: none;\
margin: 0 0 0 20px;\
padding: 0\
}\
.jazz pre {\
    white-space: pre-wrap\
}\
.jazz .code-lines li:before {\
color: rgba(128,128,128,1);\
content: counter(li);\
    counter-increment: li;\
    font-family: Menlo,monospace;\
    margin-right: 10px;\
    -webkit-user-select: none\
}\
.jazz .code-lines li {\
    padding-left: 10px;\
    text-indent: -24px;\
    white-space: pre\
}\
.jazz .code-lines li:nth-child(n+10) {\
    text-indent: -28px\
}\
.jazz .code-lines li:nth-child(n+10):before {\
    margin-right: 6px\
}\
.jazz #next_previous {\
bottom: 0;\
color: rgba(0,136,204,1);\
margin: 0 25px;\
position: absolute;\
width: 684px\
}\
.jazz .next-link a,.jazz .previous-link a {\
    background-size: 6px 12px;\
    background-repeat: no-repeat;\
    font-size: 1.4em;\
    margin-bottom: 50px;\
    margin-top: 50px;\
width: 45%\
}\
.jazz .next-link a {\
    background-image: url(../Images/right_arrow_2x.png);\
    background-position: 100% 50%;\
    float: right;\
    padding-right: 16px;\
    text-align: right\
}\
.jazz .previous-link a {\
    background-image: url(../Images/left_arrow_2x.png);\
    background-position: 0 50%;\
    float: left;\
    padding-left: 16px;\
    text-align: left\
}\
.jazz #footer {\
bottom: 0;\
position: fixed;\
width: 100%\
}\
.jazz #leave_feedback {\
display: none\
}\
.jazz #footer #leave_feedback {\
    /* background-color: rgba(160,160,160,1); */\
    box-shadow: 0 0 1px rgba(0,0,0,.07);\
color: rgba(255,255,255,1);\
    font-size: 1.1em;\
    margin-left: 912px;\
padding: 5px 10px;\
position: absolute;\
    text-align: center;\
right: auto;\
    z-index: 3;\
display: block\
}\
.jazz #modal {\
    font-family: Helvetica,Arial,sans-serif;\
    -webkit-border-radius: 0;\
width: 600px\
}\
.jazz #modal #feedback h2 {\
    font-size: 1.5em;\
    font-weight: 100;\
    margin-bottom: 10px\
}\
.jazz #modal #feedback #star_group,.jazz #modal #feedback #improve {\
top: 0\
}\
.jazz #modal #feedback #star_group label,.jazz #modal #feedback .right-leaf,.jazz #modal #feedback .checkboxes label {\
color: rgba(0,0,0,1)\
}\
.jazz #modal #feedback #star_group label {\
width: 200px\
}\
.jazz #modal #feedback .right-leaf {\
width: 297px\
}\
.jazz #modal #feedback #comment,.jazz #modal #feedback #email {\
border: 1px solid rgba(128,128,128,1);\
    font-family: Helvetica,Arial,sans-serif\
}\
.jazz #modal #feedback #comment {\
margin: 26px 0 12px\
}\
.jazz #modal #feedback #email {\
height: 13px\
}\
.jazz #modal #feedback #submit {\
    /* background-color: rgba(160,160,160,1); */\
    background-image: none;\
color: rgba(255,255,255,1);\
    font-family: Helvetica,Arial,sans-serif;\
height: 27px;\
margin: 0 0 0 6px;\
    -webkit-border-radius: 0\
}\
.jazz #modal #feedback #legal {\
    margin-top: 22px\
}\
.jazz .caption {\
    caption-side: top;\
display: block;\
    font-size: 1.1em;\
    text-align: left;\
    margin-bottom: 8px\
}\
.jazz .figure {\
margin: 40px auto;\
    text-align: center\
}\
.jazz .inline-graphic {\
margin: 20px auto;\
    text-align: center;\
display: block\
}\
.jazz tr td .para .inline-graphic {\
margin: 10px 0\
}\
.jazz .list-bullet .item .para .inline-graphic,.jazz .list-number .item .para .inline-graphic {\
margin: 0 4px;\
display: inline;\
    vertical-align: middle\
}\
.jazz .tableholder {\
}\
.jazz .tablecaption {\
    caption-side: top;\
    font-size: 1.1em;\
    text-align: left;\
    margin-bottom: 8px\
}\
.jazz ol .tablecaption {\
    font-size: .78em\
}\
.jazz .caption-number {\
    padding-right: .4em\
}\
.jazz .graybox {\
border: 1px solid rgba(238,238,238,1);\
    border-collapse: collapse;\
    border-spacing: 0;\
    empty-cells: hide;\
margin: 20px 0 36px;\
    text-align: left;\
width: 100%\
}\
.jazz .graybox p {\
margin: 0\
}\
.jazz .TableHeading_TableRow_TableCell {\
padding: 5px 10px;\
    border-left: 1px solid rgba(238,238,238,1);\
    /* background-color: rgba(249,249,249,1); */\
    font-weight: 400;\
    white-space: normal\
}\
.jazz td {\
border: 1px solid rgba(238,238,238,1);\
padding: 5px 25px 5px 10px;\
margin: 0;\
    vertical-align: middle;\
    max-width: 260px\
}\
.jazz .row-heading {\
    /* background-color: rgba(249,249,249,1) */\
}\
.video-container {\
position: relative\
}\
.video-container video {\
outline: 0;\
    -webkit-transition: -webkit-filter .3s ease;\
    -moz-transition: -moz-filter .3s ease;\
    -o-transition: -o-filter .3s ease;\
cursor: pointer\
}\
.playButtonOverlay {\
opacity: 1;\
display: block;\
    -webkit-transition: opacity .3s ease;\
position: absolute;\
background: url(../Images/playbutton.svg) no-repeat;\
    background-size: cover;\
left: 312px;\
width: 60px;\
height: 60px;\
    pointer-events: none;\
top: 40%\
}\
.playButtonOverlay.hide {\
opacity: 0\
}\
.jazz #big_button.active {\
position: fixed;\
top: 0;\
bottom: 0;\
left: 0;\
right: 0;\
    z-index: 1;\
    /* background-color: transparent */\
}\
#conceptual_flow_with_tasks #carat {\
margin: 0 10px\
}\
#conceptual_flow_with_tasks #design_resources_link {\
color: rgba(0,136,204,1);\
text-decoration: none\
}\
#conceptual_flow_with_tasks .list-check {\
list-style: url(../Images/check.png) outside none\
}\
#conceptual_flow_with_tasks .nav-part-active {\
/* background-color: rgba(255,255,255,1); */\
color: rgba(0,0,0,1);\
cursor: default\
}\
#conceptual_flow_with_tasks .nav-chapters {\
font-weight: 400;\
line-height: 110%;\
list-style-position: outside;\
list-style-type: none;\
margin: 0;\
padding: 0;\
height: 0;\
overflow: hidden;\
-webkit-transition: height .3s ease-in-out;\
-moz-transition: height .3s ease-in-out;\
-o-transition: height .3s ease-in-out;\
-ms-transition: height .3s ease-in-out;\
transition: height .3s ease-in-out\
}\
#conceptual_flow_with_tasks .nav-part-active .nav-chapters {\
margin: 15px 0 0\
}\
#conceptual_flow_with_tasks .nav-chapter {\
font-size: .8em;\
list-style-position: outside;\
list-style-type: none;\
margin: 0;\
padding: 0 0 8px\
}\
#conceptual_flow_with_tasks .nav-chapters .nav-chapter {\
margin-left: 0\
}\
#conceptual_flow_with_tasks .nav-chapter .nav-chapter-active {\
color: rgba(0,0,0,1);\
font-weight: 700;\
text-decoration: none\
}\
#conceptual_flow_with_tasks .book-parts a {\
color: rgba(128,128,128,1);\
display: block;\
margin-left: 15px;\
text-decoration: none\
}\
#conceptual_flow_with_tasks .rec-container {\
margin: 40px auto;\
text-align: center;\
width: 95%\
}\
#conceptual_flow_with_tasks .rec-container .blurb {\
text-align: center\
}\
#conceptual_flow_with_tasks .rec-container .blurb .para:nth-child(1) {\
color: rgba(128,128,128,1);\
font-size: 2em;\
font-weight: 100;\
line-height: 120%;\
margin: 0 auto 20px;\
width: 460px\
}\
#conceptual_flow_with_tasks .rec-container .blurb .para {\
margin-bottom: 20px\
}\
#conceptual_flow_with_tasks .rec-container .left-container,#conceptual_flow_with_tasks .rec-container .right-container {\
display: table-cell;\
margin-top: 20px;\
width: 325px\
}\
#conceptual_flow_with_tasks .rec-container .left-container {\
padding-right: 10px\
}\
#conceptual_flow_with_tasks .rec-container .right-container {\
padding-left: 10px\
}\
#conceptual_flow_with_tasks .rec-container .container-label {\
font-size: 1.5em;\
margin-bottom: 10px\
}\
#conceptual_flow_with_tasks .rec-container .do {\
color: rgba(17,183,40,1)\
}\
#conceptual_flow_with_tasks .rec-container .do-not {\
color: rgba(208,50,54,1)\
}\
#conceptual_flow_with_tasks .rec-container .recommended {\
color: rgba(40,103,206,1)\
}\
#conceptual_flow_with_tasks .rec-container .not-recommended {\
color: rgba(255,133,0,1)\
}\
#conceptual_flow_with_tasks .rec-container .inline-graphic {\
margin: 10px auto;\
max-width: 100%\
}\
#roadmap.jazz .nav-chapters {\
font-weight: 400;\
line-height: 110%;\
list-style-position: outside;\
list-style-type: none;\
margin: 0;\
padding: 8px 0 0;\
height: 100%;\
width: 200px\
}\
#roadmap .nav-part-active {\
/* background-color: rgba(255,255,255,1); */\
color: rgba(0,0,0,1);\
cursor: default\
}\
#roadmap.jazz .conceptual-with-tasks:before {\
border: 2px solid rgba(128,128,128,1);\
border-radius: 50%;\
content: '';\
display: block;\
float: left;\
height: 10px;\
margin: 2px 8px 0 0;\
width: 10px\
}\
#roadmap.jazz .tutorial:before {\
border: 2px solid rgba(128,128,128,1);\
content: '';\
display: block;\
float: left;\
height: 10px;\
margin: 2px 8px 0 0;\
width: 10px\
}\
#roadmap.jazz .nav-visited-chapter.conceptual-with-tasks:before {\
/* background-color: rgba(128,128,128,1) */\
}\
#roadmap.jazz .nav-visited-chapter.tutorial:before {\
/* background-color: rgba(128,128,128,1) */\
}\
#roadmap.jazz .nav-current-chapter.conceptual-with-tasks:before {\
/* background-color: rgba(0,0,0,1); */\
border-color: rgba(0,0,0,1)\
}\
#roadmap.jazz .nav-current-chapter.tutorial:before {\
/* background-color: rgba(0,0,0,1); */\
border-color: rgba(0,0,0,1)\
}\
.jazz .book-parts a {\
    margin-left: 24px\
}\
#roadmap .nav-chapters li:first-child .pipe {\
height: 9px;\
top: auto\
}\
#roadmap .nav-chapters .pipe {\
/* background-color: gray; */\
height: 9px;\
padding-top: 2px;\
position: absolute;\
right: auto;\
bottom: auto;\
left: 26px;\
width: 2px;\
margin-top: -1px\
}\
#roadmap .nav-chapters li:last-child .pipe {\
height: 0;\
display: none\
}\
#roadmap.jazz .part-name {\
cursor: default\
}\
/*! Copyright © 2012 Apple Inc.  All rights reserved. */#release_notes .chapter-name {\
width: auto\
}\
#release_notes .nav-part-active {\
/* background-color: rgba(255,255,255,1); */\
color: rgba(0,0,0,1);\
cursor: default\
}\
#release_notes #contents {\
width: 980px;\
margin-left: 0\
}\
#release_notes .section {\
width: 734px;\
margin: 0 auto\
}\
#release_notes #mini_toc {\
left: 434px\
}\
/*! Copyright © 2010 Apple Inc.  All rights reserved. */@media only print {.jazz #valence {\
display: none\
}\
    .jazz #ios_header {\
    display: none\
    }\
    .jazz #footer #leave_feedback {\
    display: none\
    }\
    .jazz #mini_toc {\
    display: none\
    }\
    .jazz .chapter {\
    position: relative;\
    margin: 0 auto;\
    top: 0;\
    border: 0;\
        box-shadow: none;\
        padding-bottom: 0\
    }\
    .jazz .book-parts {\
    display: none\
    }\
    body.jazz,.jazz .content-wrapper {\
        /* background-color: rgba(255,255,255,1) */\
    }\
    .jazz a[name] {\
    margin: auto;\
        padding-top: 0;\
    display: static\
    }\
    .jazz .next-link a {\
    display: none\
    }\
    .jazz .previous-link a {\
    display: none\
    }\
    .jazz .rec-container .left-container {\
        padding-right: 0;\
        float: left\
    }\
    .jazz .rec-container .right-container {\
        float: right;\
        padding-left: 0\
    }\
    .jazz .rec-container .left-container,.jazz .rec-container .right-container {\
    display: static;\
    width: auto\
    }\
    .jazz .para {\
    clear: both\
    }\
    .jazz .copyright {\
    margin: auto\
    }\
    \
}\
@media only screen and (min-device-width:768px) and (max-device-width:1024px) and (orientation:portrait) {body.jazz {\
    font-size: 75%\
}\
    .jazz .content-wrapper {\
    width: 100%\
    }\
    .jazz #ios_header .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz #valence .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz #ios_header {\
    height: 30px;\
        letter-spacing: 0;\
        margin-bottom: 0;\
    position: fixed;\
    top: 0;\
    width: 100%;\
        z-index: 3\
    }\
    .jazz #valence {\
    height: 70px;\
    top: 30px;\
    position: fixed;\
    width: 100%;\
        z-index: 2\
    }\
    .jazz #hierarchial_navigation {\
        margin-top: 2px\
    }\
    .jazz .download-text {\
        background-image: url(../Images/download_2x.png);\
        background-size: 30px 30px;\
        background-position: 0;\
    color: transparent;\
    height: 30px;\
    margin: 0;\
    width: 30px;\
    overflow: hidden\
    }\
    .jazz #search {\
        background-image: url(../Images/search_2x.png);\
        background-size: 30px 30px;\
        background-position: 0;\
        float: right;\
    height: 30px;\
    margin: 0 0 0 10px;\
    padding: 0;\
    width: 30px\
    }\
    .jazz #search.enabled {\
    }\
    .jazz input[type=search] {\
    display: none\
    }\
    .jazz input[type=search].enabled {\
        background-image: none;\
    display: block;\
    height: 30px;\
        margin-top: 34px;\
        padding-left: 8px;\
        -webkit-border-radius: 0;\
    width: 248px\
    }\
    .jazz #shortstack {\
    display: block;\
        float: none;\
    height: 30px;\
        margin-left: -12px;\
        margin-top: 18px;\
    padding: 13px 10px;\
    position: absolute;\
    width: 30px\
    }\
    .jazz .chapter {\
    bottom: 0;\
    left: 0;\
        margin-left: 0;\
        padding-bottom: 0;\
    position: relative;\
    right: 0;\
    top: 110px;\
        z-index: -2\
    }\
    .jazz .part-name {\
    padding: 20px 20px 20px 25px\
    }\
    .jazz .book-parts {\
        box-shadow: 0 0 1px rgba(0,0,0,.07);\
    display: none;\
    top: 110px;\
    position: fixed;\
    left: 0;\
        -webkit-overflow-scrolling: touch;\
    width: 295px;\
        z-index: -1\
    }\
    .jazz .nav-parts {\
    overflow: auto\
    }\
    .jazz .book-parts.open {\
        box-shadow: 7px 0 5px rgba(0,0,0,.05);\
    display: block;\
        z-index: 5\
    }\
    .jazz #big_button {\
    }\
    .jazz #big_button.active {\
    position: fixed;\
    top: 0;\
    bottom: 0;\
    left: 0;\
    right: 0;\
        z-index: 4;\
        /* background-color: transparent */\
    }\
    .jazz .nav-chapter {\
    padding: 0 0 16px\
    }\
    .jazz #mini_toc {\
        background-position: 90% 14px;\
        margin-top: 2px;\
    padding: 10px 10px 5px 15px;\
    width: 220px;\
    top: 125px\
    }\
    .jazz #mini_toc ul.list-bullet {\
        margin-top: 15px;\
        padding-bottom: 0;\
    width: 200px\
    }\
    .jazz .section {\
    padding: 20px 13px\
    }\
    .jazz .chapter {\
    margin: 0 auto;\
    width: 100%;\
        z-index: 0;\
    overflow: visible\
    }\
    .jazz .chapter-name {\
    padding: 15px 20px 15px 13px\
    }\
    .jazz .figure img {\
        max-width: 600px\
    }\
    .jazz .two-columns .inline-graphic {\
        max-width: 100%\
    }\
    .jazz .intro ul.list-bullet {\
    width: 100%\
    }\
    .jazz .intro ul.list-bullet li.item {\
    width: 40%;\
        padding-right: 80px\
    }\
    .jazz #next_previous {\
    margin: 0 13px;\
    position: static;\
    width: 95%\
    }\
    .jazz .copyright {\
    margin: 70px 13px 15px 0;\
    position: relative;\
    bottom: 0\
    }\
    .jazz #footer {\
    position: relative\
    }\
    .jazz #footer #leave_feedback {\
    height: 17px;\
    right: 0;\
    position: fixed\
    }\
    .jazz #modal #feedback #comment {\
        -webkit-border-radius: 0;\
    height: 111px;\
    margin: 16px 0 12px\
    }\
    .jazz #feedback .asterisk#a1.ipad,.asterisk#modal_a1.ipad {\
    left: 257px\
    }\
    .jazz #feedback .asterisk#a2.ipad,.asterisk#modal_a2.ipad {\
    top: 178px\
    }\
    .jazz .fineprint.invalid,#modal_feedback .fineprint.invalid {\
    bottom: 53px\
    }\
    .jazz #modal #feedback #email {\
        -webkit-border-radius: 0\
    }\
    .jazz #modal #feedback input[type=button] {\
        /* background-color: rgba(160,160,160,1); */\
        background-image: none;\
    color: rgba(255,255,255,1);\
        font-family: Helvetica,Arial,sans-serif;\
    margin: 10px 0 0;\
        -webkit-border-radius: 0;\
        -webkit-appearance: none;\
        -moz-appearance: none;\
    appearance: none\
    }\
    \
}\
@media only screen and (min-device-width:768px) and (max-device-width:1024px) and (orientation:landscape) {body.jazz {\
}\
    .jazz .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz #ios_header {\
        letter-spacing: 0\
    }\
    .jazz #valence {\
    top: 25px;\
    height: 35px\
    }\
    .jazz #hierarchial_navigation {\
        margin-top: 4px\
    }\
    .jazz .download-text {\
        margin-top: 6px\
    }\
    .jazz input[type=search] {\
        margin-right: 0;\
        margin-top: 0;\
        padding-left: 25px;\
        -webkit-border-radius: 0\
    }\
    .jazz .book-parts {\
        -webkit-overflow-scrolling: touch\
    }\
    .jazz .part-name {\
    padding: 15px 20px\
    }\
    .jazz .chapter {\
    bottom: 0;\
    left: 246px;\
        margin-left: 20px;\
        padding-bottom: 0;\
    overflow: visible\
    }\
    .jazz .section {\
    background: rgba(255,255,255,1)\
    }\
    .jazz #next_previous {\
    position: static;\
    background: rgba(255,255,255,1);\
    margin: 0;\
    padding: 0 25px\
    }\
    .jazz #dpf_leave_feedback {\
    height: 16px;\
        margin-left: 797px\
    }\
    .jazz .two-columns .inline-graphic {\
        max-width: 100%\
    }\
    .jazz #footer {\
    position: relative\
    }\
    .jazz .copyright {\
    margin: 0;\
    position: relative;\
    bottom: 8px\
    }\
    .jazz #footer #leave_feedback {\
    position: fixed\
    }\
    .jazz #modal #feedback #comment {\
        -webkit-border-radius: 0;\
    height: 106px\
    }\
    .jazz #feedback .asterisk#a1.ipad,.asterisk#modal_a1.ipad {\
    left: 257px\
    }\
    .jazz .fineprint.invalid,#modal_feedback .fineprint.invalid {\
    bottom: 48px\
    }\
    .jazz #modal #feedback #email {\
        -webkit-border-radius: 0\
    }\
    .jazz #modal #feedback input[type=button] {\
        /* background-color: rgba(160,160,160,1); */\
        background-image: none;\
    color: rgba(255,255,255,1);\
        font-family: Helvetica,Arial,sans-serif;\
    margin: 10px 0 0;\
        -webkit-border-radius: 0;\
        -webkit-appearance: none;\
        -moz-appearance: none;\
    appearance: none\
    }\
    \
}\
@media only screen and (min-device-width:320px) and (max-device-width:480px) and (orientation:portrait) {html {\
    -webkit-text-size-adjust: none\
}\
    body.jazz {\
        /* background-color: rgba(255,255,255,1); */\
        font-size: 70%;\
        overflow-x: hidden\
    }\
    .jazz #ios_header {\
    display: block;\
    height: 30px;\
    position: static;\
    top: 0;\
        z-index: 3\
    }\
    .jazz #ios_header .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz .header-text {\
        letter-spacing: 0;\
        padding-top: 8px\
    }\
    .jazz #wwdr {\
        padding-top: 8px\
    }\
    .jazz #valence {\
    display: block;\
    height: 91px;\
    left: 0;\
    position: relative;\
    top: 0;\
    width: 100%;\
        z-index: 2\
    }\
    .jazz #valence .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz #hierarchial_navigation {\
        font-size: 1.4em;\
        margin-bottom: 0;\
        margin-top: 0;\
        padding-left: 10%;\
        padding-right: 10%;\
        text-align: center\
    }\
    .jazz #search {\
        background-image: url(../Images/search_2x.png);\
        background-position: 50% 50%;\
        background-repeat: no-repeat;\
        background-size: 32px 32px;\
        float: right;\
    height: 44px;\
    margin: 0 80px 0 0;\
    padding: 0;\
    width: 44px\
    }\
    .jazz input[type=search] {\
    display: none\
    }\
    .jazz input[type=search].enabled {\
        background-image: none;\
    display: block;\
        font-size: 1.4em;\
    height: 40px;\
        margin-right: -75px;\
        margin-top: 64px;\
    outline: 13px solid rgba(160,160,160,1);\
        padding-left: 8px;\
        -webkit-border-radius: 0;\
    width: 297px\
    }\
    .jazz .download-text {\
        background-image: url(../Images/download_2x.png);\
        background-position: 50% 50%;\
        background-repeat: no-repeat;\
        background-size: 32px 32px;\
    color: transparent;\
    height: 44px;\
    margin: 0 10px 0 0;\
    width: 44px\
    }\
    .jazz #shortstack {\
        float: none;\
    display: block;\
    height: 32px;\
        margin-left: 75px;\
        margin-top: 42px;\
    padding: 6px;\
    position: absolute;\
    width: 32px\
    }\
    .jazz .book-parts {\
    border: 0;\
        box-shadow: 0 0 0;\
    clear: both;\
    margin: 61px 0 0 -20px;\
        -webkit-overflow-scrolling: auto;\
        z-index: -1\
    }\
    .jazz .book-parts.open {\
    display: block;\
        margin-left: 0;\
        -webkit-overflow-scrolling: touch;\
    width: 100%;\
        z-index: 2\
    }\
    .jazz .part-name {\
        padding-left: 30px\
    }\
    .jazz .nav-part-active {\
        padding-bottom: 0\
    }\
    .jazz .nav-chapters {\
        line-height: 180%\
    }\
    .jazz .nav-chapter {\
        line-height: 140%;\
        padding-bottom: 22px;\
        padding-left: 5px\
    }\
    .jazz .content-wrapper {\
        /* background-color: rgba(255,255,255,1); */\
    width: 100%\
    }\
    .jazz .chapter {\
    border: 0;\
        box-shadow: none;\
    left: 0;\
    margin: 0 auto;\
        padding-bottom: 50px;\
        padding-top: 6px;\
    position: relative;\
    right: 0;\
    top: 0;\
        -webkit-overflow-scrolling: touch;\
    width: 96%\
    }\
    .jazz .frozen {\
    position: fixed;\
        z-index: -10\
    }\
    .jazz .chapter-name {\
        margin-top: 0;\
    padding: 10px 15px 10px 5px;\
    width: 100%\
    }\
    .jazz #mini_toc {\
        background-position-y: 14px;\
    margin: 10px 0 10px 5px;\
    padding: 10px 10px 5px;\
    position: static;\
    width: 246px\
    }\
    .jazz #mini_toc #mini_toc_button {\
    width: 246px\
    }\
    .jazz .section {\
    padding: 10px 5px 20px\
    }\
    .jazz .section-name {\
        margin-top: 0\
    }\
    .jazz .figure img {\
        max-width: 275px\
    }\
    .jazz .list-bullet {\
        margin-left: 18px;\
        padding-left: 15px\
    }\
    .jazz .intro ul.list-bullet {\
        margin-top: 10px\
    }\
    .jazz .intro ul.list-bullet li.item {\
        float: none;\
    padding: 5px 0;\
    width: 100%\
    }\
    .jazz ul.list-bullet li.item:before {\
        padding-top: 1px\
    }\
    .jazz .intro ul.list-bullet li.item .para {\
        line-height: 200%\
    }\
    .jazz .two-columns {\
    display: block;\
    margin: 80px auto\
    }\
    .jazz .two-columns .inline-graphic {\
        max-width: 100%\
    }\
    .jazz .left-column {\
    display: block\
    }\
    .jazz .right-column {\
    display: block;\
        padding-left: 0\
    }\
    .jazz .two-columns img {\
        padding-bottom: 10px\
    }\
    .jazz .two-columns .para {\
        font-size: 1.2em\
    }\
    .jazz .rec-container .blurb .para:nth-child(1) {\
    width: 95%\
    }\
    .jazz .rec-container .left-container {\
    display: block;\
    width: 100%\
    }\
    .jazz .rec-container .right-container {\
    display: block;\
        margin-top: 10px;\
    width: 100%\
    }\
    .jazz #next_previous {\
    margin: 0 10px;\
    position: static;\
    width: 95%\
    }\
    .jazz .previous-link {\
    display: table-cell;\
    height: 60px;\
        margin-bottom: 30px;\
    width: 40%\
    }\
    .jazz .next-link {\
    display: table-cell;\
    height: 60px;\
        margin-bottom: 30px;\
    width: 40%\
    }\
    .jazz .next-link a,.jazz .previous-link a {\
    display: table-cell;\
        vertical-align: middle;\
    width: 90%\
    }\
    .jazz #next_previous .copyright a {\
    display: inline;\
        vertical-align: baseline\
    }\
    .jazz .copyright {\
    margin: 0;\
        text-align: center\
    }\
    .jazz #footer {\
        /* background-color: rgba(255,255,255,1); */\
        padding-bottom: 20px;\
    position: relative\
    }\
    .jazz #footer #leave_feedback {\
    margin: 0 auto;\
    height: 15px;\
    position: static;\
    width: 60px\
    }\
    .jazz #modal {\
        margin-bottom: 7px;\
    overflow: scroll!important;\
    padding: 0;\
        -webkit-overflow-scrolling: touch;\
    width: 300px\
    }\
    .jazz #modal #closebox {\
    left: 266px;\
    top: 5px\
    }\
    .jazz .activated {\
    height: 700px;\
        margin-bottom: 0\
    }\
    .jazz #feedback {\
    padding: 10px;\
    width: 280px\
    }\
    .jazz #modal #sending {\
    width: 300px\
    }\
    .jazz #modal #feedback h2 {\
        font-size: 1.1em;\
        margin-bottom: 5px;\
        margin-top: 0;\
        padding-top: 0\
    }\
    .jazz #modal #feedback .left-leaf {\
        float: none;\
        margin-bottom: 15px;\
    width: 250px\
    }\
    .jazz #modal #feedback .right-leaf {\
        float: none;\
    width: 250px\
    }\
    .jazz #modal #feedback #comment {\
        -webkit-border-radius: 0;\
    height: 90px;\
    width: 266px\
    }\
    .jazz #feedback .asterisk#a1 {\
    left: 185px;\
    top: 5px\
    }\
    .jazz #feedback .asterisk#a2 {\
    top: 270px;\
    left: 279px\
    }\
    .jazz #modal #feedback #email {\
        -webkit-border-radius: 0;\
    width: 266px\
    }\
    .jazz #modal #feedback .fineprint {\
    bottom: 0;\
    position: relative;\
    width: 200px\
    }\
    .jazz #modal #feedback input[type=button] {\
        /* background-color: rgba(160,160,160,1); */\
        background-image: none;\
    color: rgba(255,255,255,1);\
        font-family: Helvetica,Arial,sans-serif;\
    left: 0;\
    margin: 10px 0 0;\
        -webkit-border-radius: 0;\
        -webkit-appearance: none;\
        -moz-appearance: none;\
    appearance: none\
    }\
    .jazz #modal #feedback #submit {\
    margin: 10px 0 0\
    }\
    \
}\
@media only screen and (min-device-width:320px) and (max-device-width:568px) and (orientation:landscape) {html {\
    -webkit-text-size-adjust: none\
}\
    body.jazz {\
        /* background-color: rgba(255,255,255,1); */\
        font-size: 70%;\
        overflow-x: hidden\
    }\
    .jazz #ios_header {\
    display: block;\
    height: 30px;\
    position: static;\
    top: 0;\
        z-index: 3\
    }\
    .jazz #ios_header .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz .header-text {\
        letter-spacing: 0;\
        padding-top: 8px\
    }\
    .jazz #wwdr {\
        padding-top: 8px\
    }\
    .jazz #valence {\
    display: block;\
    height: 82px;\
    left: 0;\
    position: relative;\
    top: 0;\
    width: 100%;\
        z-index: 2\
    }\
    .jazz #valence .content-wrapper {\
        /* background-color: rgba(242,242,242,1); */\
    margin: 0 auto;\
    width: 96%\
    }\
    .jazz #hierarchial_navigation {\
        float: none;\
        font-size: 1.4em;\
    margin: 0 auto;\
        padding-top: 0;\
        text-align: center;\
    width: 90%\
    }\
    .jazz #search {\
        background-image: url(../Images/search_2x.png);\
        background-position: 50% 50%;\
        background-repeat: no-repeat;\
        background-size: 32px 32px;\
        float: right;\
    height: 44px;\
    margin: 4px 199px 0 0;\
    padding: 0;\
    width: 44px\
    }\
    .jazz input[type=search] {\
    display: none\
    }\
    .jazz input[type=search].enabled {\
        background-image: none;\
    display: block;\
        font-size: 1.4em;\
    height: 40px;\
        margin-right: -200px;\
        margin-top: 60px;\
    outline: 13px solid rgba(128,128,128,1);\
        padding-left: 8px;\
        -webkit-border-radius: 0;\
    width: 545px\
    }\
    .jazz .download-text {\
        background-image: url(../Images/download_2x.png);\
        background-position: 50% 50%;\
        background-repeat: no-repeat;\
        background-size: 32px 32px;\
    color: transparent;\
    height: 44px;\
    margin: 4px 10px 0 0;\
    width: 44px\
    }\
    .jazz #shortstack {\
        float: none;\
    display: block;\
    height: 32px;\
        margin-left: 192px;\
        margin-top: 5px;\
    padding: 6px;\
    position: absolute;\
    width: 32px\
    }\
    .jazz .book-parts {\
    clear: both;\
    display: none;\
    margin: 51px 0 0 -20px;\
        -webkit-overflow-scrolling: touch;\
        z-index: 1\
    }\
    .jazz .book-parts.open {\
    display: block;\
    width: 60%;\
        z-index: 2\
    }\
    .jazz .part-name {\
        padding-left: 30px\
    }\
    .jazz .nav-part-active {\
        padding-bottom: 0\
    }\
    .jazz .nav-chapters {\
        line-height: 180%\
    }\
    .jazz .nav-chapter {\
        line-height: 140%;\
        padding-bottom: 22px;\
        padding-left: 5px\
    }\
    .jazz .content-wrapper {\
        /* background-color: rgba(255,255,255,1); */\
    width: 100%\
    }\
    .jazz .chapter {\
    border: 0;\
        box-shadow: none;\
    left: 0;\
    margin: 0 auto;\
        padding-bottom: 50px;\
        padding-top: 6px;\
    position: relative;\
    right: 0;\
    top: 0;\
        -webkit-overflow-scrolling: touch;\
    width: 96%\
    }\
    .jazz .frozen {\
        padding-top: 112px;\
    position: fixed;\
        z-index: -10\
    }\
    .jazz .chapter-name {\
    padding: 10px 15px 10px 5px;\
    width: 100%\
    }\
    .jazz #mini_toc {\
        background-position-y: 14px;\
    margin: 10px 0 10px 5px;\
    padding: 10px 10px 5px;\
    position: static;\
    width: 246px\
    }\
    .jazz #mini_toc #mini_toc_button {\
    width: 246px\
    }\
    .jazz .section {\
    padding: 10px 5px 20px\
    }\
    .jazz .figure img {\
        max-width: 275px\
    }\
    .jazz .list-bullet {\
        margin-left: 18px;\
        padding-left: 15px\
    }\
    .jazz .intro ul.list-bullet {\
        margin-top: 10px\
    }\
    .jazz .intro ul.list-bullet li.item {\
        float: none;\
    padding: 5px 0;\
    width: 100%\
    }\
    .jazz ul.list-bullet li.item:before {\
        padding-top: 1px\
    }\
    .jazz .intro ul.list-bullet li.item .para {\
        line-height: 200%\
    }\
    .jazz .two-columns {\
    display: block;\
    margin: 80px auto\
    }\
    .jazz .left-column {\
    display: block\
    }\
    .jazz .right-column {\
    display: block;\
        padding-left: 0\
    }\
    .jazz .two-columns img {\
        padding-bottom: 10px\
    }\
    .jazz .two-columns .inline-graphic {\
        max-width: 100%\
    }\
    .jazz .two-columns .para {\
        font-size: 1.2em\
    }\
    .jazz .rec-container .blurb .para:nth-child(1) {\
    width: 95%\
    }\
    .jazz .rec-container .left-container {\
    display: block;\
    width: 100%\
    }\
    .jazz .rec-container .right-container {\
    display: block;\
        margin-top: 10px;\
    width: 100%\
    }\
    .jazz #next_previous {\
    margin: 0 10px;\
    position: static;\
    width: 95%\
    }\
    .jazz .previous-link {\
    display: table-cell;\
    height: 60px;\
        margin-bottom: 30px;\
    width: 40%\
    }\
    .jazz .next-link {\
    display: table-cell;\
    height: 60px;\
        margin-bottom: 30px;\
    width: 40%\
    }\
    .jazz .next-link a,.jazz .previous-link a {\
    display: table-cell;\
        vertical-align: middle;\
    width: 90%\
    }\
    .jazz #next_previous .copyright a {\
    display: inline;\
        vertical-align: baseline\
    }\
    .jazz .copyright {\
    margin: 0;\
        text-align: center\
    }\
    .jazz #footer {\
        /* background-color: rgba(255,255,255,1); */\
        padding-bottom: 20px;\
    position: relative\
    }\
    .jazz #footer #leave_feedback {\
    margin: 0 auto;\
    height: 15px;\
    position: static;\
    width: 100px\
    }\
    .jazz #modal {\
        margin-bottom: 7px;\
    overflow: scroll!important;\
    padding: 0;\
        -webkit-overflow-scrolling: touch;\
    width: 300px\
    }\
    .jazz #modal #closebox {\
    left: 266px;\
    top: 5px\
    }\
    .jazz .activated {\
    height: 700px;\
        margin-bottom: 0\
    }\
    .jazz #feedback {\
    padding: 10px;\
    width: 280px\
    }\
    .jazz #modal #sending {\
    width: 300px\
    }\
    .jazz #modal #feedback h2 {\
        font-size: 1.1em;\
        margin-bottom: 5px;\
        margin-top: 0;\
        padding-top: 0\
    }\
    .jazz #modal #feedback .left-leaf {\
        float: none;\
        margin-bottom: 15px;\
    width: 250px\
    }\
    .jazz #modal #feedback .right-leaf {\
        float: none;\
    width: 250px\
    }\
    .jazz #modal #feedback #comment {\
        -webkit-border-radius: 0;\
    height: 90px;\
    width: 266px\
    }\
    .jazz #feedback .asterisk#a1 {\
    left: 185px;\
    top: 5px\
    }\
    .jazz #feedback .asterisk#a2 {\
    top: 270px;\
    left: 279px\
    }\
    .jazz #modal #feedback #email {\
        -webkit-border-radius: 0;\
    width: 266px\
    }\
    .jazz #modal #feedback .fineprint {\
    bottom: 0;\
    position: relative;\
    width: 200px\
    }\
    .jazz #modal #feedback input[type=button] {\
        /* background-color: rgba(160,160,160,1); */\
        background-image: none;\
    color: rgba(255,255,255,1);\
        font-family: Helvetica,Arial,sans-serif;\
    left: 0;\
    margin: 10px 0 0;\
        -webkit-border-radius: 0;\
        -webkit-appearance: none;\
        -moz-appearance: none;\
    appearance: none\
    }\
    .jazz #modal #feedback #submit {\
    margin: 10px 0 0\
    }\
    \
}\
.svg-container {\
position: relative\
}\
.svg-play-button {\
background: url(../Images/playbutton.svg) no-repeat;\
    background-position: 0 0;\
    background-size: cover;\
width: 32px;\
height: 32px;\
position: absolute;\
top: 90px;\
left: 90px;\
    pointer-events: none;\
opacity: 1;\
    -webkit-transition: opacity .3s ease\
}\
.svg-play-button.faded {\
opacity: 0\
}\
.p {\
color: rgba(0,0,0,1)\
}\
.c {\
color: rgba(0,116,0,1);\
    font-style: italic\
}\
.err {\
}\
.k {\
color: rgba(170,13,145,1)\
}\
.o {\
color: #666\
}\
.cm {\
color: rgba(0,116,0,1);\
    font-style: italic\
}\
.cp {\
color: rgba(100,56,32,1)\
}\
.c1 {\
color: rgba(0,116,0,1);\
    font-style: italic\
}\
.cs {\
color: rgba(0,116,0,1);\
    font-style: italic\
}\
.gd {\
color: #A00000\
}\
.ge {\
    font-style: italic\
}\
.gr {\
color: #F00\
}\
.gh {\
color: navy;\
    font-weight: 700\
}\
.gi {\
color: #00A000\
}\
.go {\
color: gray\
}\
.gp {\
color: navy;\
    font-weight: 700\
}\
.gs {\
    font-weight: 700\
}\
.gu {\
color: purple;\
    font-weight: 700\
}\
.gt {\
color: #0040D0\
}\
.kc {\
color: rgba(170,13,145,1)\
}\
.kd {\
color: rgba(170,13,145,1)\
}\
.kp {\
color: rgba(170,13,145,1)\
}\
.kr {\
color: rgba(170,13,145,1)\
}\
.kt {\
color: rgba(170,13,145,1)\
}\
.m {\
color: rgba(28,0,207,1)\
}\
.s {\
color: rgba(196,26,22,1)\
}\
.n {\
color: rgba(46,13,110,1)\
}\
.na {\
color: rgba(131,48,30,1)\
}\
.nb {\
color: rgba(170,13,145,1)\
}\
.nc {\
color: rgba(63,110,116,1)\
}\
.no {\
color: rgba(38,71,75,1)\
}\
.nd {\
color: #A2F\
}\
.ni {\
color: #999;\
    font-weight: 700\
}\
.ne {\
color: #D2413A;\
    font-weight: 700\
}\
.nf {\
color: rgba(0,0,0,1)\
}\
.nl {\
color: rgba(46,13,110,1)\
}\
.nn {\
color: #00F;\
    font-weight: 700\
}\
.nt {\
color: green;\
    font-weight: 700\
}\
.nv {\
color: #19177C\
}\
.ow {\
color: #A2F;\
    font-weight: 700\
}\
.w {\
color: #bbb\
}\
.mf {\
color: rgba(28,0,207,1)\
}\
.mh {\
color: rgba(28,0,207,1)\
}\
.mi {\
color: rgba(28,0,207,1)\
}\
.mo {\
color: rgba(28,0,207,1)\
}\
.sb {\
color: rgba(196,26,22,1)\
}\
.sc {\
color: rgba(196,26,22,1)\
}\
.sd {\
color: rgba(196,26,22,1)\
}\
.s2 {\
color: rgba(196,26,22,1)\
}\
.se {\
color: rgba(196,26,22,1)\
}\
.sh {\
color: rgba(196,26,22,1)\
}\
.si {\
color: rgba(196,26,22,1)\
}\
.sx {\
color: rgba(196,26,22,1)\
}\
.sr {\
color: rgba(196,26,22,1)\
}\
.s1 {\
color: rgba(196,26,22,1)\
}\
.ss {\
color: rgba(196,26,22,1)\
}\
.bp {\
color: green\
}\
.vc {\
color: rgba(63,110,116,1)\
}\
.vg {\
color: #19177C\
}\
.vi {\
color: #19177C\
}\
.il {\
color: rgba(28,0,207,1)\
}"


#endif
