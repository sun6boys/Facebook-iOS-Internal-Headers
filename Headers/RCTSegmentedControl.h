//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@class NSArray, RCTEventDispatcher;

@interface RCTSegmentedControl : UISegmentedControl
{
    RCTEventDispatcher *_eventDispatcher;
    NSArray *_values;
    int _selectedIndex;
}

@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (void)onChange:(id)arg1;
- (id)initWithEventDispatcher:(id)arg1;

@end

