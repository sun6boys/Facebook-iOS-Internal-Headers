//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBGLFaceDerivedContext : NSObject
{
    float _detectionData[64];
    float _midpoint[2];
    int _activeFaces;
}

@property(readonly, nonatomic) int activeFaces; // @synthesize activeFaces=_activeFaces;
@property(readonly, nonatomic) float *midpoint;
@property(readonly, nonatomic) float *detectionData;
- (id)initWithFaceData:(id)arg1;

@end

