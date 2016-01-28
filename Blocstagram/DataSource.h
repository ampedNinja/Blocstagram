//
//  DataSource.h
//  Blocstagram
//
//  Created by Eric Beasley on 1/14/16.
//  Copyright © 2016 eric j beasley. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;

@interface DataSource : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item;

@end
