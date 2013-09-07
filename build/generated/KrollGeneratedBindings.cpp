/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf -L C++ -E -t /private/var/folders/jm/pfq1s5d566lgdl1r8snyz5mm0000gn/T/pierreuno/android_zero_table_view_separator-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/jm/pfq1s5d566lgdl1r8snyz5mm0000gn/T/pierreuno/android_zero_table_view_separator-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.exygy.androidzerotableviewseparator.ExampleProxy.h"
#include "com.exygy.androidzerotableviewseparator.AndroidZeroTableViewSeparatorModule.h"


#line 14 "/private/var/folders/jm/pfq1s5d566lgdl1r8snyz5mm0000gn/T/pierreuno/android_zero_table_view_separator-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 24, duplicates = 0 */

class AndroidZeroTableViewSeparatorBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AndroidZeroTableViewSeparatorBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AndroidZeroTableViewSeparatorBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 52,
      MAX_WORD_LENGTH = 75,
      MIN_HASH_VALUE = 52,
      MAX_HASH_VALUE = 75
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/jm/pfq1s5d566lgdl1r8snyz5mm0000gn/T/pierreuno/android_zero_table_view_separator-generated/KrollGeneratedBindings.gperf"
      {"com.exygy.androidzerotableviewseparator.ExampleProxy", ::com::exygy::androidzerotableviewseparator::androidzerotableviewseparator::ExampleProxy::bindProxy, ::com::exygy::androidzerotableviewseparator::androidzerotableviewseparator::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/jm/pfq1s5d566lgdl1r8snyz5mm0000gn/T/pierreuno/android_zero_table_view_separator-generated/KrollGeneratedBindings.gperf"
      {"com.exygy.androidzerotableviewseparator.AndroidZeroTableViewSeparatorModule", ::com::exygy::androidzerotableviewseparator::AndroidZeroTableViewSeparatorModule::bindProxy, ::com::exygy::androidzerotableviewseparator::AndroidZeroTableViewSeparatorModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/jm/pfq1s5d566lgdl1r8snyz5mm0000gn/T/pierreuno/android_zero_table_view_separator-generated/KrollGeneratedBindings.gperf"

