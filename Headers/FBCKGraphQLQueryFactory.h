//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBCKGraphQLQueryFactory : NSObject
{
}

+ (id)liveCommentsQueryForInput:(id)arg1;
+ (id)commentRefreshQueryWithLegacyID:(id)arg1 shouldFetchCommentInteractors:(BOOL)arg2 replyPreviewConfiguration:(id)arg3;
+ (id)commentsRefreshQueryWithIDs:(id)arg1 shouldFetchCommentInteractors:(BOOL)arg2 replyPreviewConfiguration:(id)arg3;
+ (id)neckLoadQueryForFeedbackID:(id)arg1 commentOrder:(unsigned int)arg2 afterCursor:(id)arg3 count:(unsigned int)arg4 shouldFetchCommentInteractors:(BOOL)arg5 replyPreviewConfiguration:(id)arg6;
+ (id)tailLoadQueryForFeedbackID:(id)arg1 commentOrder:(unsigned int)arg2 afterCursor:(id)arg3 count:(unsigned int)arg4 shouldFetchCommentInteractors:(BOOL)arg5 replyPreviewConfiguration:(id)arg6;
+ (id)headLoadQueryForFeedbackID:(id)arg1 commentOrder:(unsigned int)arg2 upToCursor:(id)arg3 count:(unsigned int)arg4 shouldFetchCommentInteractors:(BOOL)arg5 replyPreviewConfiguration:(id)arg6;
+ (id)_initialLoadQueryForRankedFocusedCommentID:(id)arg1 feedbackID:(id)arg2 count:(unsigned int)arg3 shouldFetchCommentInteractors:(BOOL)arg4 replyPreviewConfiguration:(id)arg5;
+ (id)_initialLoadQueryForUnrankedFocusedCommentID:(id)arg1 countCommentsMoreRecentThanFocusedComment:(unsigned int)arg2 feedbackID:(id)arg3 count:(unsigned int)arg4 shouldFetchCommentInteractors:(BOOL)arg5 replyPreviewConfiguration:(id)arg6;
+ (id)_initialLoadQueryForFeedbackID:(id)arg1 commentOrder:(unsigned int)arg2 count:(unsigned int)arg3 shouldFetchCommentInteractors:(BOOL)arg4 replyPreviewConfiguration:(id)arg5;
+ (id)initialLoadQueryForFeedbackID:(id)arg1 focusedCommentID:(id)arg2 commentOrder:(unsigned int)arg3 count:(unsigned int)arg4 shouldFetchCommentInteractors:(BOOL)arg5 replyPreviewConfiguration:(id)arg6;

@end

