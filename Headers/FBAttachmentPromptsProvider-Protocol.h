//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDate;
@protocol FBAttachmentPromptsProviderDelegate;

@protocol FBAttachmentPromptsProvider
@property(nonatomic) __weak id <FBAttachmentPromptsProviderDelegate> delegate;
- (void)loadAttachmentsWithLastLoadDate:(NSDate *)arg1 completion:(void (^)(NSArray *, BOOL, NSError *))arg2;
@end

