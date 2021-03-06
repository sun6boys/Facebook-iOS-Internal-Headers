//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBMemProductionPrompt, NSString;

@interface FBProductionPromptSession : FBValueObject <NSCopying>
{
    NSString *_session;
    FBMemProductionPrompt *_prompt;
}

+ (id)newWithPrompt:(id)arg1;
@property(readonly, copy, nonatomic) FBMemProductionPrompt *prompt; // @synthesize prompt=_prompt;
@property(readonly, copy, nonatomic) NSString *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 prompt:(id)arg2;

@end

