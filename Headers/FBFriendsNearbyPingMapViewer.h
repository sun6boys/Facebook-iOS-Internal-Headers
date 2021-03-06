//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBFriendsNearbyPingCalloutViewDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CLGeocoder, FBFriendsNearbyLocationPing, FBFriendsNearbyPingActionSheetController, FBFriendsNearbyPingCalloutView, FBKVOController, FBUserSession, MKCircle, MKMapView, NSMutableSet, NSString, UIButton, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol FBFriendsNearbyPingMapViewerDelegate;

@interface FBFriendsNearbyPingMapViewer : UIView <MKMapViewDelegate, UIGestureRecognizerDelegate, FBFriendsNearbyPingCalloutViewDelegate>
{
    MKMapView *_mapView;
    NSMutableSet *_locationPings;
    FBUserSession *_session;
    UIButton *_nextButton;
    UIButton *_prevButton;
    UIButton *_locationButton;
    UITapGestureRecognizer *_mapTapRecognizer;
    UISwipeGestureRecognizer *_mapNextRecognizer;
    UISwipeGestureRecognizer *_mapPrevRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UIPanGestureRecognizer *_mapPanRecognizer;
    MKCircle *_accuracyOverlay;
    BOOL _mapExpanded;
    BOOL _recenterRequested;
    BOOL _selectedUsingNavigation;
    FBKVOController *_kvoController;
    FBFriendsNearbyPingCalloutView *_callout;
    NSString *_nearString;
    CLGeocoder *_geoCoder;
    FBFriendsNearbyPingActionSheetController *_openInActionSheetController;
    FBFriendsNearbyLocationPing *_currentLocationPing;
    float _mapOffsetY;
    id <FBFriendsNearbyPingMapViewerDelegate> _dataSource;
}

@property(readonly, retain, nonatomic) FBFriendsNearbyLocationPing *currentLocationPing; // @synthesize currentLocationPing=_currentLocationPing;
@property(nonatomic) __weak id <FBFriendsNearbyPingMapViewerDelegate> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) float mapOffsetY; // @synthesize mapOffsetY=_mapOffsetY;
- (void).cxx_destruct;
- (void)_updateAccuracyCircle;
- (void)_updateSelectedPingLocation;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (struct UIEdgeInsets)_mapEdgeInsets;
- (id)_sortedAnnotation:(id)arg1;
- (CDStruct_feeb6407)_mapRectForCoordinateRegion:(CDStruct_feeb6407)arg1;
- (CDStruct_feeb6407)_boundingBox:(CDStruct_c3b9c2ee)arg1;
- (void)_adjustZoomLevelAndCenterWithLocation:(id)arg1;
- (void)_adjustZoomLevelAndCenter;
- (void)_setCenterCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)_mapSnapshot;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleMapViewTapEvent:(id)arg1;
- (void)_didTapMap:(id)arg1;
- (void)_didDoubleTapMap:(id)arg1;
- (void)_selectLocationPing:(id)arg1 reCentered:(BOOL)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)reloadMap;
- (void)layoutSubviews;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)_didTapExpand:(id)arg1;
- (void)_didTapLocation:(id)arg1;
- (void)toggleResize;
- (void)selectPing:(id)arg1;
- (void)_didTapPrevious:(id)arg1;
- (void)_didTapNext:(id)arg1;
- (void)_didPanMap:(id)arg1;
- (void)_swipeNav:(id)arg1;
- (void)_showCallout;
- (void)_dismissCalloutAnimated:(BOOL)arg1;
- (void)didTapCallout:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

