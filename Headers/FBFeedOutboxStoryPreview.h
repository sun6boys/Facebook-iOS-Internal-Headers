//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBFeedOutboxStoryPreviewAttachmentsInfo, FBFeedOutboxStoryPreviewHeader, NSAttributedString;

@interface FBFeedOutboxStoryPreview : FBValueObject <NSCopying>
{
    FBFeedOutboxStoryPreviewAttachmentsInfo *_attachmentsInfo;
    NSAttributedString *_status;
    FBFeedOutboxStoryPreviewHeader *_header;
}

@property(readonly, copy, nonatomic) FBFeedOutboxStoryPreviewHeader *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSAttributedString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) FBFeedOutboxStoryPreviewAttachmentsInfo *attachmentsInfo; // @synthesize attachmentsInfo=_attachmentsInfo;
- (void).cxx_destruct;
- (id)initWithAttachmentsInfo:(id)arg1 status:(id)arg2 header:(id)arg3;

@end

