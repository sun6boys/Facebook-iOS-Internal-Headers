//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;

@protocol FBComponentsCollectionViewItemSizeProvider <NSObject>
- (void)enumerateLayoutsForItemsUsingBlock:(void (^)(NSIndexPath *, struct CKComponentLayout *, struct CGRect, char *))arg1;
- (void)enumerateSizesforItemsUsingBlock:(void (^)(NSIndexPath *, struct CGSize, char *))arg1;
- (struct CGSize)sizeForItemAtIndexPath:(NSIndexPath *)arg1;
@end

