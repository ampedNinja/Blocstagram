//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Eric Beasley on 1/19/16.
//  Copyright © 2016 eric j beasley. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat)heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
