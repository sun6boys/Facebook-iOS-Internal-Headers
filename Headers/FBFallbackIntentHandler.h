//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBIntentHandler-Protocol.h"

@class NSString, UIApplication;
@protocol FBFallbackIntentHandlerDelegate;

@interface FBFallbackIntentHandler : NSObject <FBIntentHandler>
{
    UIApplication *_application;
    id <FBFallbackIntentHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFallbackIntentHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleIntent:(id)arg1;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

