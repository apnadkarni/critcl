[section {Changes for version 3.1.18 (unreleased)}]
[list_begin enumerated]

[enum] Bugfix. Issue #95. Changed field [const critcl_bytes.s] to
       [type {unsigned char*}] to match Tcl's type. Further constified
       the field to make clear that read-only usage is the common case
       for it.

[enum] Bugfix. Package [package critcl::cutil] bumped to version 0.1.1.
       Fixed missing inclusion of header [file string.h] in
       [file critcl_alloc.h], needed for [fun memcpy] in macro [fun STREP].

[enum] Merged pull request #83 from apnadkarni/vc-fixes.
       Removed deprecated -Gs for MSVC builds, and other Windows fixups.

[enum] Feature. Package [package critcl::iassoc] bumped to version 1.1.
       Refactored internals to generate an include header for use by .c files.
       This now matches what other generator packages do.
       The template file is inlined and removed.
       
[enum] Merged pull request #82 from gahr/home-symlink
       Modified tests to handle possibility of $HOME a symlink.

[enum] Merged pull request #81 from gahr/test-not-installed
       Modified test support to find uninstalled critcl packages when
       running tests. Handles all but critcl::md5.

[enum] Merged pull request #85 from snoe925/issue-84
       to fix Issue #84 breaking installation on OSX.

[enum] Merged pull request #87 from apnadkarni/tea-fixes to fix Issue
       #86, broken -tea option, generating an incomplete package.

[enum] Feature. New package [package critcl::callback] providing
       C-level functions and data structures to manage callbacks from
       C to Tcl.

[enum] Feature. Package [package critcl::literals] bumped to version
       1.3.  Added mode [const +list] enabling the conversion of
       multiple literals into a list of their strings.

[enum] Feature. Package [package critcl::enum] bumped to version 1.1.
       Added basic mode handling, supporting [const tcl] (default) and
       [const +list] (extension enabling the conversion of multiple
       enum values into a list of their strings).

[enum] Feature. Package [package critcl::emap] bumped to version 1.2.
       Extended existing mode handling with [const +list] extension
       enabling the conversion of multiple emap values into a list of
       their strings.

[enum] Feature. Extended the set of available types by applying a few
       range restrictions to the scalar types ([term int],
       [term long], [term wideint], [term double], [term float]).

       [para] Example: [term {int > 0}] is now a viable type name.

       [para] For details see the package reference.
[list_end]
