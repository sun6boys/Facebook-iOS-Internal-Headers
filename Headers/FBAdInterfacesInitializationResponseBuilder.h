//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAdInterfacesAdminInfo, FBAdInterfacesPromotion, NSDictionary;

@interface FBAdInterfacesInitializationResponseBuilder : NSObject
{
    FBAdInterfacesPromotion *_promotion;
    FBAdInterfacesAdminInfo *_adminInfo;
    NSDictionary *_extraData;
}

+ (id)adInterfacesInitializationResponseFromExistingAdInterfacesInitializationResponse:(id)arg1;
+ (id)adInterfacesInitializationResponse;
- (void).cxx_destruct;
- (id)withExtraData:(id)arg1;
- (id)withAdminInfo:(id)arg1;
- (id)withPromotion:(id)arg1;
- (id)build;

@end

