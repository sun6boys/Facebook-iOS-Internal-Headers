//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClassProvidable-Protocol.h"

@class FBMQTTClientManager, MNActiveParticipantMQTTPublisher, MNMQTTPersonSyncEventHandler, MNMQTTSender, MNOnlineStatusManager, NSArray, NSString;
@protocol MNMQTTListenerManaging;

@interface FBDiodeModuleMQTTServiceCoordinator : NSObject <FBClassProvidable>
{
    FBMQTTClientManager *_clientManager;
    MNMQTTSender *_sender;
    id <MNMQTTListenerManaging> _listenerManager;
    MNOnlineStatusManager *_onlineStatusManager;
    MNActiveParticipantMQTTPublisher *_activeParticipantPublisher;
    MNMQTTPersonSyncEventHandler *_personSyncEventHandler;
    NSArray *_extraListeners;
}

- (void).cxx_destruct;
- (void)stopMQTTServices;
- (void)startMQTTServicesWithClientManager:(id)arg1;
- (id)initWithMQTTSender:(id)arg1 listenerManager:(id)arg2 onlineStatusManager:(id)arg3 activeParticipantPublisher:(id)arg4 personSyncEventHandler:(id)arg5;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

