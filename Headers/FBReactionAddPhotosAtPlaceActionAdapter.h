//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseActionAdapter.h"

@class FBReactionHeaderInlineActionView, FBUserSession;

@interface FBReactionAddPhotosAtPlaceActionAdapter : FBReactionBaseActionAdapter
{
    FBReactionHeaderInlineActionView *_actionView;
    FBUserSession *_session;
    int _renderIdiom;
}

@property(nonatomic) int renderIdiom; // @synthesize renderIdiom=_renderIdiom;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)_commonLoggingExtras;
- (void)_performAction;
- (void)_composeActionTapped;
- (BOOL)performMagicTap;
- (void)performActionWithExtras:(id)arg1;
- (id)actionView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4;

@end

