//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MNRichMediaUploadMetricsBuilder : NSObject
{
    NSMutableDictionary *_attributes;
    unsigned long long _numBytesWastedCounter;
    unsigned int _numFailedAttemptsCounter;
    double _percentUploaded;
}

- (void).cxx_destruct;
- (id)build;
- (void)_finalizeCounters;
- (void)increaseNumBytesWasted:(unsigned long long)arg1;
- (void)incrementNumFailedAttempts;
- (void)setPercentUploaded:(double)arg1;
- (void)setLogValues:(id)arg1;
- (void)setLogValueNumeric:(long long)arg1 forKey:(id)arg2;
- (void)setLogValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

