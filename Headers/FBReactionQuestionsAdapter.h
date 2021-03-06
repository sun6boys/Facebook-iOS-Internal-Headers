//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseCardAdapter.h"

#import "FBReactionQuestionCardViewDelegate-Protocol.h"

@class FBReactionAdapterContext, FBUserSession, NSString, UIView;

@interface FBReactionQuestionsAdapter : FBReactionBaseCardAdapter <FBReactionQuestionCardViewDelegate>
{
    UIView *_cardView;
    FBReactionAdapterContext *_context;
    FBUserSession *_session;
    int _renderIdiom;
}

@property(nonatomic) int renderIdiom; // @synthesize renderIdiom=_renderIdiom;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_didTapAnswerAtIndex:(id)arg1;
- (void)openURL:(id)arg1 forQuestionsCardView:(id)arg2;
- (void)cardInStackView:(id)arg1 didTapOnActionAtIndex:(id)arg2;
- (BOOL)performMagicTap;
- (id)cardView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

