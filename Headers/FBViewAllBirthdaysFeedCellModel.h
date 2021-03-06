//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBMemPerson, NSString;

@interface FBViewAllBirthdaysFeedCellModel : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMemPerson *_personRow_person;
    BOOL _personRow_isFirstRowInSection;
    NSString *_loadingRow_text;
    NSString *_sectionRow_text;
    BOOL _sectionRow_isBelowLargeSection;
    NSString *_largeSectionRow_text;
    int _largeSectionRow_dateType;
}

+ (id)sectionRowWithText:(id)arg1 isBelowLargeSection:(BOOL)arg2;
+ (id)personRowWithPerson:(id)arg1 isFirstRowInSection:(BOOL)arg2;
+ (id)loadingRowWithText:(id)arg1;
+ (id)largeSectionRowWithText:(id)arg1 dateType:(int)arg2;
- (void).cxx_destruct;
- (void)matchPersonRow:(CDUnknownBlockType)arg1 loadingRow:(CDUnknownBlockType)arg2 sectionRow:(CDUnknownBlockType)arg3 largeSectionRow:(CDUnknownBlockType)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

