//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class FBRichTextView, NSAttributedString;

@interface FBPresenceRichTextHeaderFooterView : UITableViewHeaderFooterView
{
    FBRichTextView *_textView;
}

+ (float)heightForAttributedString:(id)arg1 width:(float)arg2;
+ (id)font;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSAttributedString *text;
- (void)addTargetForLinkTap:(id)arg1 action:(SEL)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

