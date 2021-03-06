//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFriendingToolbox, FBInfiniteHScrollComponent, FBPYMKCellInfiniteHScrollDataSource;

@interface FBPYMKCellInfiniteHScrollComponent : CKCompositeComponent
{
    FBPYMKCellInfiniteHScrollDataSource *_dataSource;
    FBFriendingToolbox *_toolbox;
    FBInfiniteHScrollComponent *_hscrollComponent;
    SEL _addFriendButtonAction;
}

+ (id)newWithDataSource:(id)arg1 requestHowFound:(id)arg2 cancelReference:(id)arg3 pymkLocation:(id)arg4 addFriendButtonAction:(SEL)arg5 xoutButtonAction:(SEL)arg6 toolbox:(id)arg7 perfLoggingEventUnitTypeName:(id)arg8;
@property(readonly, nonatomic) SEL addFriendButtonAction; // @synthesize addFriendButtonAction=_addFriendButtonAction;
@property(readonly, nonatomic) __weak FBInfiniteHScrollComponent *hscrollComponent; // @synthesize hscrollComponent=_hscrollComponent;
@property(readonly, nonatomic) __weak FBFriendingToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) __weak FBPYMKCellInfiniteHScrollDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;

@end

