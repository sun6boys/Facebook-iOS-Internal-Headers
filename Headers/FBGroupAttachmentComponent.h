//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBFeedEventBus, FBIntentAnalyticsInfo, FBMemGroup;

@interface FBGroupAttachmentComponent : CKCompositeComponent
{
    FBMemGroup *_group;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
    FBFeedEventBus *_eventBus;
}

+ (id)newWithGroup:(id)arg1 eventBus:(id)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)didTapJoin;
- (void)didTapGroup;
- (void)triggerChaining:(unsigned int)arg1;

@end

