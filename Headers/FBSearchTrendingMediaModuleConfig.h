//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBSearchTrendingMediaModuleConfig : FBExperimentContext
{
    BOOL _enableMediaModule;
    unsigned int _moduleStyle;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) unsigned int moduleStyle; // @synthesize moduleStyle=_moduleStyle;
@property(readonly, nonatomic) BOOL enableMediaModule; // @synthesize enableMediaModule=_enableMediaModule;

@end

