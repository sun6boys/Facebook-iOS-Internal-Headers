//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPhotosByCategoryConnection, FBReactionMenuDownloader, NSArray, NSError;

@protocol FBReactionMenuDownloaderDelegate <NSObject>
- (void)menuDownloader:(FBReactionMenuDownloader *)arg1 didFail:(NSError *)arg2;
- (void)menuDownloader:(FBReactionMenuDownloader *)arg1 didDownloadProductListEdges:(NSArray *)arg2 photosByCategory:(FBMemPhotosByCategoryConnection *)arg3;
@end

