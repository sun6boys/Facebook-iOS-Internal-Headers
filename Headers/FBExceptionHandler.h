//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBExceptionHandlerStackRecording-Protocol.h"

@class FBBreakpadExceptionHandler, FBBuild, FBExceptionHandlerAppSpecificConfiguration, FBExceptionHandlerListenerAnnouncer, FBWatchdogTimer, NSArray, NSFileManager, NSMutableDictionary, NSString, NSURL, UIApplication;
@protocol FBUserAgentFormatting;

@interface FBExceptionHandler : NSObject <FBExceptionHandlerStackRecording>
{
    FBExceptionHandlerAppSpecificConfiguration *_appSpecificConfiguration;
    id _appDidBecomeActiveObserver;
    NSFileManager *_fileManager;
    FBBuild *_build;
    NSString *_deviceID;
    NSURL *_exceptionURL;
    int _exceptionPid;
    NSString *_userID;
    NSString *_sessionID;
    double _reportPercentage;
    BOOL _isProductionBuild;
    struct FBErrorMetadataConfig _errorMetadataConfig;
    NSMutableDictionary *_additionalExceptionInfo;
    NSMutableDictionary *_appSessionExceptionHandlers;
    NSArray *_logFilePathsToUpload;
    FBExceptionHandlerListenerAnnouncer *_announcer;
    UIApplication *_application;
    int _breakpadCrashCountOnStartup;
    BOOL _breakpadEnabled;
    FBWatchdogTimer *_watchdog;
    id <FBUserAgentFormatting> _userAgentFormatter;
    NSString *_preamble;
    NSString *_exceptionDirectory;
    FBBreakpadExceptionHandler *_breakpadExceptionHandler;
}

+ (id)currentExceptionHandler;
@property(retain, nonatomic) FBBreakpadExceptionHandler *breakpadExceptionHandler; // @synthesize breakpadExceptionHandler=_breakpadExceptionHandler;
@property(readonly, copy, nonatomic) NSString *exceptionDirectory; // @synthesize exceptionDirectory=_exceptionDirectory;
@property(copy, nonatomic) NSString *preamble; // @synthesize preamble=_preamble;
@property(retain, nonatomic) id <FBUserAgentFormatting> userAgentFormatter; // @synthesize userAgentFormatter=_userAgentFormatter;
@property(nonatomic) BOOL breakpadEnabled; // @synthesize breakpadEnabled=_breakpadEnabled;
@property(retain, nonatomic) NSURL *exceptionURL; // @synthesize exceptionURL=_exceptionURL;
@property(nonatomic) double reportPercentage; // @synthesize reportPercentage=_reportPercentage;
@property(readonly, nonatomic) FBWatchdogTimer *watchdog; // @synthesize watchdog=_watchdog;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)didRecordBacktracesWithOriginFile:(const char *)arg1 originLine:(int)arg2 msg:(id)arg3 additionalInfo:(id)arg4;
- (BOOL)isBreakpadEnabled;
- (BOOL)isAssertLoggingSupported;
- (id)URLEncodeString:(id)arg1;
- (void)_cleanupExceptionTimestampFile;
- (int)sendExceptionToServerImpl:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)willRecordStackBacktraces;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (int)getCrashReportCount;
- (BOOL)_processOneReportWithUrl:(id)arg1 shouldUploadLogs:(BOOL)arg2 paramsFilename:(id)arg3 errorFilename:(id)arg4 agentFilename:(id)arg5 connectionFactory:(CDUnknownBlockType)arg6 lastExceptionLinkHandler:(CDUnknownBlockType)arg7;
- (BOOL)_shouldSendException;
- (int)sendExceptionToServerWithLogFilePathsToUpload:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (int)sendExceptionToServerWithLogFilePathsToUpload:(id)arg1;
- (void)setIsUploading:(BOOL)arg1;
- (int)getTestErrorFileMax;
- (id)getAssertFilenames;
- (id)getTestErrorFilesContent;
- (id)getTestErrorFilePath;
- (void)clearAppSessionExceptionHandlerWithKey:(id)arg1;
- (BOOL)hadCrashesOnStartup;
- (void)setAppSessionExceptionHandlerWithKey:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)setShouldCrashOnException:(BOOL)arg1;
- (struct FBErrorMetadataConfig *)copyErrorMetadataConfig:(id)arg1;
- (id)_getUserAgent;
- (void)setUserAgent:(id)arg1;
@property(nonatomic) BOOL userIsEmployee;
- (void)setSessionID:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setExceptionInfoString:(id)arg1 forKey:(id)arg2;
- (id)latestBreakpadCrashReportWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)latestBreakpadCrashReport;
- (id)_getPostDataWithError:(id)arg1 params:(id)arg2 includeDebugLogs:(BOOL)arg3;
- (id)debugLogsForUpload;
- (unsigned int)numLogsToUpload;
- (id)_exceptionFilename:(id)arg1 atIndex:(int)arg2;
- (id)_exceptionFilename:(id)arg1;
- (id)_getExceptionInfoForClass:(id)arg1 name:(id)arg2 reason:(id)arg3 symbols:(id)arg4;
- (id)getExceptionInfo:(id)arg1;
- (void)_updateSignalsMetadata;
- (void)_updateErrorParams;
- (id)_exceptionInfoPreamble;
- (void)dealloc;
- (void)tearDownExceptionHandlers;
- (void)generateStackTraceWithParams:(id)arg1;
- (void)setupExceptionHandlers;
- (void)setupHandlers;
- (void)updateExceptionPreamble;
- (void)_checkPreviousExceptionsAndExitIfNecessary;
- (BOOL)_hasAppCrashedTooMuchRecently;
- (void)_setupAppDidBecomeActiveHandler;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)initWithAppSpecificConfiguration:(id)arg1 buildBranchName:(id)arg2 buildNumber:(id)arg3 buildRevision:(id)arg4 buildTime:(id)arg5 application:(id)arg6 isProductionBuild:(BOOL)arg7 exceptionDirectory:(id)arg8 processId:(int)arg9;
- (id)initWithAppSpecificConfiguration:(id)arg1 buildBranchName:(id)arg2 buildNumber:(id)arg3 buildRevision:(id)arg4 buildTime:(id)arg5;
- (id)initWithBuild:(id)arg1 appSpecificConfiguration:(id)arg2;
- (id)initWithBuild:(id)arg1 appSpecificConfiguration:(id)arg2 application:(id)arg3 isProductionBuild:(BOOL)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6;
- (id)init;

@end

