//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@interface FBVideoPlayerState : FBValueObject <NSCopying>
{
    BOOL _hasDisplayed;
    BOOL _didPlayToEnd;
    BOOL _manuallyPaused;
    BOOL _isOnEndScreen;
    BOOL _didLogStartedPlaying;
    BOOL _hasShownSoundPrompt;
    double _time;
}

@property(readonly, nonatomic) BOOL hasShownSoundPrompt; // @synthesize hasShownSoundPrompt=_hasShownSoundPrompt;
@property(readonly, nonatomic) BOOL didLogStartedPlaying; // @synthesize didLogStartedPlaying=_didLogStartedPlaying;
@property(readonly, nonatomic) BOOL isOnEndScreen; // @synthesize isOnEndScreen=_isOnEndScreen;
@property(readonly, nonatomic) BOOL manuallyPaused; // @synthesize manuallyPaused=_manuallyPaused;
@property(readonly, nonatomic) BOOL didPlayToEnd; // @synthesize didPlayToEnd=_didPlayToEnd;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) BOOL hasDisplayed; // @synthesize hasDisplayed=_hasDisplayed;
- (id)initWithHasDisplayed:(BOOL)arg1 time:(double)arg2 didPlayToEnd:(BOOL)arg3 manuallyPaused:(BOOL)arg4 isOnEndScreen:(BOOL)arg5 didLogStartedPlaying:(BOOL)arg6 hasShownSoundPrompt:(BOOL)arg7;

@end

