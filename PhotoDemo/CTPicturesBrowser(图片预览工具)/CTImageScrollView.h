//
//  CTImageScrollView.h
//  TYKYLibraryDemo
//
//  Created by Setven on 2019/4/19.
//  Copyright © 2019 Setven. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol CTImageScrollViewDelegate <NSObject>

- (void)singalTapAction;

@end
@interface CTImageScrollView : UIScrollView

@property (nonatomic,weak) id <CTImageScrollViewDelegate> scrollDelegate;

+ (instancetype)initWithFrame:(CGRect)frame
                        image:(id)imageData;


- (void)refreshShowImage:(UIImage *)img;

@end
