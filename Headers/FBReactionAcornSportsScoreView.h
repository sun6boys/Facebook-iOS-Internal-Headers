//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextConfig, FBRichTextView, UIImageView;

@interface FBReactionAcornSportsScoreView : UIView
{
    FBRichTextView *_scoreLabel;
    FBRichTextConfig *_scoreConfig;
    UIImageView *_scoreCardImage;
    float _desiredHeight;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithScoreString:(id)arg1;
- (id)init;

@end

