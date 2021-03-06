//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBVersionedFileInfo, NSError, NSString;

@protocol FBVersionedFileConfigurationDelegate <NSObject>
- (void)didCompleteConfigurationWithSuccess:(BOOL)arg1;
- (void)notifyDidDiscardFile;
- (BOOL)provisionSchemaForFile;
- (NSString *)readCurrentVersionForFile;
- (BOOL)checkIntegrityForVersionedFile;
- (NSError *)openFile;
- (void)beginConfigurationOfVersionedFile:(FBVersionedFileInfo *)arg1;
@end

