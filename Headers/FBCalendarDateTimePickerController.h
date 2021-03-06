//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBCalendarCollectionViewDataSourceDelegate-Protocol.h"
#import "FBCalendarDateTimePickerViewDelegate-Protocol.h"

@class FBCalendarCollectionViewDataSource, FBCalendarDateTimePickerView, FBEventAnalyticTracker, NSCalendar, NSDate, NSString;
@protocol FBCalendarDateTimePickerControllerDelegate;

@interface FBCalendarDateTimePickerController : UIViewController <FBCalendarCollectionViewDataSourceDelegate, FBCalendarDateTimePickerViewDelegate>
{
    FBCalendarDateTimePickerView *_dateTimeView;
    FBCalendarCollectionViewDataSource *_calendarDataSource;
    NSCalendar *_calendar;
    NSDate *_startDate;
    NSDate *_endDate;
    int _activeField;
    FBEventAnalyticTracker *_tracker;
    BOOL _hasPerformedInitialCalendarConfiguration;
    id <FBCalendarDateTimePickerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCalendarDateTimePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)_dateForActiveField:(int)arg1;
- (id)_dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ofDate:(id)arg4;
- (void)dateTimePickerView:(id)arg1 didUpdateToState:(int)arg2;
- (void)calendarDataSource:(id)arg1 didSelectCalendarDate:(id)arg2 atIndexPath:(id)arg3;
- (void)_adjustDateRangeIfNecessaryWithPreviousDate:(id)arg1;
- (void)timePickerDidUpdateValue:(id)arg1;
- (void)didSelectRemoveEndDate:(id)arg1;
- (void)didSelectAddEndDate:(id)arg1;
- (void)didSelectEndDate:(id)arg1;
- (void)didSelectStartDate:(id)arg1;
- (void)didSelectCancelButton:(id)arg1;
- (void)didSelectSaveButton:(id)arg1;
- (void)configureFieldsAnimated:(BOOL)arg1;
- (void)configureCalendar;
- (void)configureTimePickerAnimated:(BOOL)arg1;
- (void)configureViewAnimated:(BOOL)arg1;
- (void)configureViewForActiveField:(int)arg1 animated:(BOOL)arg2;
- (void)_configureContextRow:(id)arg1 isActive:(BOOL)arg2 withText:(id)arg3;
- (void)_updateTitleTextForStartDate:(id)arg1 endDate:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 activeField:(int)arg3 tracker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

