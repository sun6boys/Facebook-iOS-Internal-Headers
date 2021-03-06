//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@interface FBFacepileExpandableViewMetrics : FBValueObject <NSCopying>
{
    BOOL _isRounded;
    BOOL _shouldShowSeparatorView;
    float _faceDimension;
    float _andMoreTextFontSize;
    float _spaceBetweenFacepiles;
    float _spaceBetweenFaceAndNameText;
    float _nameTextFontSize;
    float _separatorOffset;
    float _topPadding;
    float _bottomPadding;
}

@property(readonly, nonatomic) float bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(readonly, nonatomic) float topPadding; // @synthesize topPadding=_topPadding;
@property(readonly, nonatomic) BOOL shouldShowSeparatorView; // @synthesize shouldShowSeparatorView=_shouldShowSeparatorView;
@property(readonly, nonatomic) BOOL isRounded; // @synthesize isRounded=_isRounded;
@property(readonly, nonatomic) float separatorOffset; // @synthesize separatorOffset=_separatorOffset;
@property(readonly, nonatomic) float nameTextFontSize; // @synthesize nameTextFontSize=_nameTextFontSize;
@property(readonly, nonatomic) float spaceBetweenFaceAndNameText; // @synthesize spaceBetweenFaceAndNameText=_spaceBetweenFaceAndNameText;
@property(readonly, nonatomic) float spaceBetweenFacepiles; // @synthesize spaceBetweenFacepiles=_spaceBetweenFacepiles;
@property(readonly, nonatomic) float andMoreTextFontSize; // @synthesize andMoreTextFontSize=_andMoreTextFontSize;
@property(readonly, nonatomic) float faceDimension; // @synthesize faceDimension=_faceDimension;
- (id)initWithFaceDimension:(float)arg1 andMoreTextFontSize:(float)arg2 spaceBetweenFacepiles:(float)arg3 spaceBetweenFaceAndNameText:(float)arg4 nameTextFontSize:(float)arg5 separatorOffset:(float)arg6 isRounded:(BOOL)arg7 shouldShowSeparatorView:(BOOL)arg8 topPadding:(float)arg9 bottomPadding:(float)arg10;

@end

