//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface FBReactionHorizontalScrollCardComponentsListFlowLayout : UICollectionViewLayout
{
    NSMutableArray *_layoutAttributes;
    struct CGSize _itemSize;
    struct UIEdgeInsets _contentInsets;
    struct CGSize _constrainedSize;
}

@property(nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
- (void).cxx_destruct;
- (struct CGPoint)_snapToContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1;
- (id)init;

@end

