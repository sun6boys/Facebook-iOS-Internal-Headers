//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;
@protocol _FBReactionAdapterHelperDelegate;

@interface _FBReactionCardAdapterURLHelper : NSObject
{
    NSURL *_url;
    id <_FBReactionAdapterHelperDelegate> _delegate;
    NSString *_entityId;
    unsigned int _entityIndex;
}

@property(nonatomic) unsigned int entityIndex; // @synthesize entityIndex=_entityIndex;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(nonatomic) __weak id <_FBReactionAdapterHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attachmentTapped;
- (id)initWithURL:(id)arg1 attachmentView:(id)arg2;
- (id)init;

@end

