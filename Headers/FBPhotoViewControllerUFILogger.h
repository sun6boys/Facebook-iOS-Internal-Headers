//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPhoto, NSMutableDictionary, NSString;

@interface FBPhotoViewControllerUFILogger : NSObject
{
    FBMemPhoto *_photo;
    NSString *_openingSource;
    NSMutableDictionary *_photoIDMap;
}

@property(copy, nonatomic) NSMutableDictionary *photoIDMap; // @synthesize photoIDMap=_photoIDMap;
@property(copy, nonatomic) NSString *openingSource; // @synthesize openingSource=_openingSource;
- (void).cxx_destruct;
- (void)stopWithPhoto:(id)arg1 result:(id)arg2;
- (void)startWithPhoto:(id)arg1 logType:(id)arg2;
- (id)initWithOpeningSource:(id)arg1;

@end

