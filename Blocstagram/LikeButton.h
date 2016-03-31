//
//  LikeButton.h
//  Blocstagram
//
//  Created by eric beasley on 3/29/16.
//  Copyright © 2016 eric j beasley. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LikeState) {
    LikeStateNotLiked       = 0,
    LikeStateLiking         = 1,
    LikeStateLiked          = 2,
    LikeStateUnliking       = 3
};

@interface LikeButton : UIButton
@property (nonatomic, assign) LikeState likeButtonState;
@end
