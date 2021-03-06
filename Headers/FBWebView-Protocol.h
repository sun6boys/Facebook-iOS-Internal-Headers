//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFullscreenErrorView, NSString, NSURL, NSURLRequest, UIScrollView, UIView;
@protocol FBWebViewDelegate, UIWebViewDelegate;

@protocol FBWebView <NSObject>
@property(nonatomic) __weak id <UIWebViewDelegate> delegate_DEPRECATED;
@property(nonatomic) __weak id <FBWebViewDelegate> delegate;
@property(nonatomic) BOOL isBannerAtTop;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) BOOL hasPullToRefresh;
@property(retain, nonatomic) FBFullscreenErrorView *errorView;
@property(retain, nonatomic) UIView *bannerView;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(nonatomic) unsigned int dataDetectorTypes;
@property(readonly, copy, nonatomic) NSString *title;
@property(nonatomic) int displayState;
- (BOOL)hasOnlySecureContent;
- (void)stopLoading;
- (void)reload;
- (void)goBack;
- (void)goForward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)loadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)loadRequest:(NSURLRequest *)arg1;
- (void)exposePullToRefresh;
- (void)updateOrientationWithOrientation:(int)arg1;
- (void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1;
- (void)setGestureRecognizersEnabled:(BOOL)arg1;
- (NSString *)stringByEvaluatingJavaScriptFromString:(NSString *)arg1;
- (NSString *)safeStringByEvaluatingJavaScriptFromString:(NSString *)arg1;
- (void)safeExecuteJavaScriptFromString:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)evaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (NSURL *)currentLocationURL;
@end

