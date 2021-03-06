//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBAvatarProtocol-Protocol.h"
#import "FBQueriedEntityFieldsProtocol-Protocol.h"
#import "FBQueriedNodeFieldsProtocol-Protocol.h"
#import "FBQueriedProfileFieldsProtocol-Protocol.h"
#import "FBQueriedSearchSuggestionUnitFieldsProtocol-Protocol.h"
#import "FBQueriedSearchableFieldsProtocol-Protocol.h"

@class NSString;

@interface FBMemPlatformApplication : FBMemModelObject <FBAvatarProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedSearchableFieldsProtocol, FBQueriedSearchSuggestionUnitFieldsProtocol>
{
}

+ (id)graphQLTypeName;
- (id)profilePictureForFeedGutter;
- (id)iOSAppStoreID;
- (BOOL)hasNativeIOSApp;
- (id)entityURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

