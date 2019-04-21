//
//  CTImagePath.h
//  TJBaoAnWallSDK
//
//  Created by Setven on 2019/4/19.
//  Copyright © 2019 Setven. All rights reserved.
//


#import <Foundation/Foundation.h>

#define kPictureBrowserScreenHeight   [[UIScreen mainScreen] bounds].size.height
#define kPictureBrowserScreenWidth    [[UIScreen mainScreen] bounds].size.width

@interface CTImagePath : NSObject

/**
 单张图片存储的本地地址

 @param imageURL 图片下载地址
 @return 返回图片存储的本地地址
 */
+ (NSString *)getImagePathWithURLstring:(NSString *)imageURL;


/**
 图片存储的根目录
 
 @return 返回根目录
 */
+ (NSString *)documentPath;

@end
