//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBVideoUploadExperimentContext : FBExperimentContext
{
    BOOL _customTranscoding;
    BOOL _performStandardization;
    BOOL _enableComposerRetry;
    BOOL _enablePauseResume;
    BOOL _enableRealPauseButton;
    int _maxNumberOfVideoSegments;
    int _maxNumberOfParallelChunks;
    int _maxVideoSegmentDurationInSeconds;
    NSString *_videoCompressionSettingsJSON;
    unsigned int _maxAvgVideoBitrateSD;
    unsigned int _maxAvgVideoBitrateHD;
    NSString *_audioCompressionSettingsJSON;
}

+ (id)parameterConfigurations;
+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL enableRealPauseButton; // @synthesize enableRealPauseButton=_enableRealPauseButton;
@property(readonly, nonatomic) BOOL enablePauseResume; // @synthesize enablePauseResume=_enablePauseResume;
@property(readonly, nonatomic) BOOL enableComposerRetry; // @synthesize enableComposerRetry=_enableComposerRetry;
@property(readonly, copy, nonatomic) NSString *audioCompressionSettingsJSON; // @synthesize audioCompressionSettingsJSON=_audioCompressionSettingsJSON;
@property(readonly, nonatomic) unsigned int maxAvgVideoBitrateHD; // @synthesize maxAvgVideoBitrateHD=_maxAvgVideoBitrateHD;
@property(readonly, nonatomic) unsigned int maxAvgVideoBitrateSD; // @synthesize maxAvgVideoBitrateSD=_maxAvgVideoBitrateSD;
@property(readonly, copy, nonatomic) NSString *videoCompressionSettingsJSON; // @synthesize videoCompressionSettingsJSON=_videoCompressionSettingsJSON;
@property(readonly, nonatomic) int maxVideoSegmentDurationInSeconds; // @synthesize maxVideoSegmentDurationInSeconds=_maxVideoSegmentDurationInSeconds;
@property(readonly, nonatomic) int maxNumberOfParallelChunks; // @synthesize maxNumberOfParallelChunks=_maxNumberOfParallelChunks;
@property(readonly, nonatomic) int maxNumberOfVideoSegments; // @synthesize maxNumberOfVideoSegments=_maxNumberOfVideoSegments;
@property(readonly, nonatomic) BOOL performStandardization; // @synthesize performStandardization=_performStandardization;
@property(readonly, nonatomic) BOOL customTranscoding; // @synthesize customTranscoding=_customTranscoding;
- (void).cxx_destruct;
- (BOOL)useSegmentedVideoUpload;
- (id)audioCompressionSettings;
- (id)videoCompressionSettings;

@end

