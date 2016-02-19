//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by eric beasley on 2/18/16.
//  Copyright © 2016 eric j beasley. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end
