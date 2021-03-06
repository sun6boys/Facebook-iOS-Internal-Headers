//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class FBWebViewController, NSString, NSURL;

@protocol FBWebViewControllerDelegate <UIScrollViewDelegate>

@optional
- (void)webViewControllerHistoryChanged:(FBWebViewController *)arg1;
- (void)webViewController:(FBWebViewController *)arg1 userCanceledLoadURL:(NSURL *)arg2;
- (void)webViewController:(FBWebViewController *)arg1 handleNativeURL:(NSURL *)arg2;
- (void)webViewController:(FBWebViewController *)arg1 didFinishLoadURL:(NSURL *)arg2;
- (void)webViewController:(FBWebViewController *)arg1 didStartLoadURL:(NSURL *)arg2;
- (BOOL)webViewController:(FBWebViewController *)arg1 shouldStartLoadURL:(NSURL *)arg2 navigationType:(int)arg3;
- (void)webViewController:(FBWebViewController *)arg1 didLoadHostString:(NSString *)arg2;
@end

