//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBAddAlbumRequest : FBNetworkerRequest
{
    NSString *_name;
    NSString *_description;
    NSString *_placeTargetID;
    NSString *_privacyJSON;
    NSString *_targetFBID;
}

- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)networkRequest;
- (void)setTargetFBID:(id)arg1 actorFBID:(id)arg2;
- (id)initWithName:(id)arg1 description:(id)arg2 place:(id)arg3 privacy:(id)arg4 callbackPerformer:(id)arg5;

@end

