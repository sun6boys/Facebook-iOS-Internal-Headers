//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBPlacePickerGametimeExperimentContext : FBExperimentContext
{
    BOOL _shouldShow;
    BOOL _shouldShowAsTopResult;
}

+ (void)logExposureWithSession:(id)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) BOOL shouldShowAsTopResult; // @synthesize shouldShowAsTopResult=_shouldShowAsTopResult;
@property(nonatomic) BOOL shouldShow; // @synthesize shouldShow=_shouldShow;

@end

