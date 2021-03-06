//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBContactImporterRevampModelListener-Protocol.h"

@class NSString;

@interface FBContactImporterRevampModelListenerAnnouncer : FBAnnouncerBase <FBContactImporterRevampModelListener>
{
}

- (void)contactImporterRevampModelDidFailPYMKLoading:(id)arg1 withError:(id)arg2;
- (void)contactImporterRevampModelDidLoadPYMK:(id)arg1;
- (void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfContacts:(unsigned int)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfMatchedContacts:(unsigned int)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterRevampModelDidBatchLoad:(id)arg1 fromIndex:(unsigned int)arg2 forNumberOfMatchedContacts:(unsigned int)arg3;
- (void)contactImporterRevampModelDidReadAddressBook:(id)arg1;
- (void)contactImporterRevampModelDidFailLoading:(id)arg1 withError:(id)arg2;
- (void)contactImporterRevampModelDidLoad:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

