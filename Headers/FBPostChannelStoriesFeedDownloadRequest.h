//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLPagedDownloadRequest.h"

@class NSDictionary;

@interface FBPostChannelStoriesFeedDownloadRequest : FBGraphQLPagedDownloadRequest
{
    NSDictionary *_queryOptions;
}

- (void).cxx_destruct;
- (id)newQueryWithCursor:(id)arg1;
- (id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 queryOptions:(id)arg3;

@end

