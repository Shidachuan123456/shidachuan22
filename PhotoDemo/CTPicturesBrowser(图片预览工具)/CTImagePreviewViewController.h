//
//  ImagePreviewViewController.h
//  TYKYTwoLearnOneDo
//
//  Created by Setven on 2019/4/19.
//  Copyright © 2019 Setven. All rights reserved.
//


#import <UIKit/UIKit.h>

@class CTDownloadWithSession;

@interface CTImagePreviewViewController : UIViewController

/**
 *展示网络图片，传入参数
 *1、图片数组(图片本身或者图片下载地址)imageArray
 *2、当前图片位置currentNum
 *3、根视图控制器rootVC
 */
+ (void)showPictureWithUrlOrImages:(NSArray * __nonnull)imageOrUrlArray
                withCurrentPageNum:(NSInteger)currentNum;


/**
 清空图片缓存

 @return 返回结果
 */
+ (BOOL)clearLocalImages;



@end
