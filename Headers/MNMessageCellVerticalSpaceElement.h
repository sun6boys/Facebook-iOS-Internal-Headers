//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "MNMessageCellLayoutElement-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface MNMessageCellVerticalSpaceElement : FBValueObject <MNMessageCellLayoutElement, NSCopying>
{
    float _height;
}

+ (id)newWithHeight:(float)arg1;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
- (id)initWithHeight:(float)arg1;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

