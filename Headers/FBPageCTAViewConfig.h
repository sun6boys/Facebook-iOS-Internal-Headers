//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface FBPageCTAViewConfig : NSObject
{
    BOOL _hasChevron;
    UIColor *_backgroundColor;
    UIColor *_highlightBackgroundColor;
}

+ (id)newWithBackgroundColor:(id)arg1 highlightBackgroundColor:(id)arg2 hasChevron:(BOOL)arg3;
@property(readonly, copy, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) BOOL hasChevron; // @synthesize hasChevron=_hasChevron;
- (void).cxx_destruct;
- (id)_initWithBackgroundColor:(id)arg1 highlightBackgroundColor:(id)arg2 hasChevron:(BOOL)arg3;

@end

