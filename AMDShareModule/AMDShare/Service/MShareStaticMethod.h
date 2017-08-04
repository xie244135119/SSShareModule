
//
//  MShareStaticMethod.h
//  AMDShareModule
//
//  Created by 马清霞 on 2017/7/3.
//  Copyright © 2017年 Sherry. All rights reserved.
//

#ifndef MShareStaticMethod_h
#define MShareStaticMethod_h

//按钮圆角大小
#define SMCornerRadius 3

//描边宽度
#define SMBorderWidth  0.5
//线条高度和宽度
#define SMLineHeight   0.5
#define SMLineWidth    0.5
#define SMLineColor ColorWithRGB(230, 230, 230, 1)

//字体颜色来源于RGB
//#define ColorWithRGB(r,g,b,a) [UIColor colorWithRed:(float)r/255 green:(float)g/255 blue:(float)b/255 alpha:a]
// 默认文字颜色 0x333333
#define SMDEFAULT_TEXT_COLOR ColorWithRGB(51,51,51, 1)
// 默认灰色文字颜色 0x777777
#define SMDEFAULT_TEXT_GRAY_COLOR ColorWithRGB(119,119,119, 1)
// 灰色文字颜色 0x999999
#define SMsummary_text_color ColorWithRGB(153,153,153, 1)
// 默认背景色
#define SMDEFAULT_BACKGROUND_COLOR ColorWithRGB(246, 246, 246, 1)

//#define kGCDMain dispatch_get_main_queue()


//加载过程中的图片
#define SMLoadingImage [[UIImage imageNamed:@"AMDShareModule.bundle/xnormal_img"] resizableImageWithCapInsets:UIEdgeInsetsMake(8, 8, 7, 7)]                 //商品默认头像

#define SMGetFilePath(a) [[[NSBundle mainBundle] resourcePath]stringByAppendingPathComponent:a]
// 图片加载
#define SMShareBundleName @"AMDShareModule.bundle"           //custom模块 bundle名称
#define SMimageFromName(a) [[UIImage alloc]initWithContentsOfFile:SMGetFilePath(a)]
#define SMShareSrcImage(file) SMimageFromName([SMShareBundleName stringByAppendingPathComponent:file])


#define SMNonNil(a,r)  a?a:r

#endif /* MShareStaticMethod_h */