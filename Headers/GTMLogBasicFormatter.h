//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GTMLogFormatter-Protocol.h"

@class NSString;

@interface GTMLogBasicFormatter : NSObject <GTMLogFormatter>
{
}

- (id)stringForFunc:(id)arg1 withFormat:(id)arg2 valist:(void *)arg3 level:(int)arg4;
- (id)prettyNameForFunc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

