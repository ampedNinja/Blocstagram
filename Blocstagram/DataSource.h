//
//  DataSource.h
//  Blocstagram
//
//  Created by Eric Beasley on 1/14/16.
//  Copyright © 2016 eric j beasley. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, strong, readonly) NSString *accessToken;

- (void)downloadImageForMediaItem:(Media *)mediaItem;
- (void)toggleLikeOnMediaItem:(Media *)mediaItem withCompletionHandler:(void (^)(void))completionHandler;
- (void)commentOnMediaItem:(Media *)mediaItem withCommentText:(NSString *)commentText;
- (void)deleteMediaItem:(Media *)item;
- (void)requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void)requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
+ (NSString *)instagramClientID;
- (void)reloadMediaItem:(Media *)mediaItem;

@end
