//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBStickerTagsDataSource : NSObject
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_parseTaggedStickersResponse:(id)arg1 graphQLQuery:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_parseStickerTagsResponse:(id)arg1 graphQLQuery:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_handleSuccess:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchStickersTaggedWith:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStickerTagsWithType:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1;

@end

