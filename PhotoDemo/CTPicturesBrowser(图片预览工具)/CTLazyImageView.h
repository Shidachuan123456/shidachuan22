//
//  LazyImageView.h
//  Created by Setven on 2019/4/19.
//  Copyright © 2019 Setven. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CTLazyImageView : UIImageView

/**
 加载全屏网络图片

 @param imageURLString 图片下载地址
 */
- (void)loadFullScreenImage:(NSString *)imageURLString;

/**
 直接加载图片

 @param image 图片对象
 */
- (void)loadFullImage:(UIImage *)image;

@end
